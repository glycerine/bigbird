## Regression tests for R >= 3.0.0

pdf("reg-tests-1c.pdf", encoding = "ISOLatin1.enc")

## mapply with classed objects with length method
## was not documented to work in 2.x.y
setClass("A", representation(aa = "integer"))
a <- new("A", aa = 101:106)
setMethod("length", "A", function(x) length(x@aa))
setMethod("[[", "A", function(x, i, j, ...) x@aa[[i]])
(z <- mapply(function(x, y) {x * y}, a, rep(1:3, 2)))
stopifnot(z == c(101, 204, 309, 104, 210, 318))
## reported as a bug (which it was not) by H. Pages in
## https://stat.ethz.ch/pipermail/r-devel/2012-November/065229.html

## recyling in split()
## https://stat.ethz.ch/pipermail/r-devel/2013-January/065700.html
x <- 1:6
y <- split(x, 1:2)
class(x) <- "A"
yy <- split(x, 1:2)
stopifnot(identical(y, yy))
## were different in R < 3.0.0


## dates with fractional seconds after 2038 (PR#15200)
## Extremely speculative!
z <- as.POSIXct(2^31+c(0.4, 0.8), origin=ISOdatetime(1970,1,1,0,0,0,tz="GMT"))
zz <- format(z)
stopifnot(zz[1] == zz[2])
## printed form rounded not truncated in R < 3.0.0

## origin coerced in tz and not GMT by as.POSIXct.numeric()
x <- as.POSIXct(1262304000, origin="1970-01-01", tz="EST")
y <- as.POSIXct(1262304000, origin=.POSIXct(0, "GMT"), tz="EST")
stopifnot(identical(x, y))

## Handling records with quotes in names
x <- c("a b' c",
"'d e' f g",
"h i 'j",
"k l m'")
y <- data.frame(V1 = c("a", "d e", "h"), V2 = c("b'", "f", "i"), V3 = c("c", "g", "j\nk l m")) 
f <- tempfile()
writeLines(x, f)
stopifnot(identical(count.fields(f), c(3L, 3L, NA_integer_, 3L)))
stopifnot(identical(read.table(f), y))
stopifnot(identical(scan(f, ""), as.character(t(as.matrix(y)))))

## PR#15004
n <- 10
s <- 3
l <- 10000
m <- 20
x <- data.frame(x1 = 1:n, x2 = 1:n)
by <- data.frame(V1 = factor(rep(1:3, n %/% s + 1)[1:n], levels = 1:s))
for(i in 1:m) {
    by[[i + 1]] <- factor(rep(l, n), levels = 1:l)
}
agg <- aggregate.data.frame(x, by, mean)
stopifnot(nrow(unique(by)) == nrow(agg))
## rounding caused groups to be falsely merged

## PR#15454
set.seed(357)
z <- matrix(c(runif(50, -1, 1), runif(50, -1e-190, 1e-190)), nrow = 10)
contour(z)
## failed because rounding made crossing tests inconsistent

## Various cases where zero length vectors were not handled properly
## by functions in base and utils, including PR#15499
y <- as.data.frame(list())
format(y)
format(I(integer()))
gl(0, 2)
z <- list(numeric(0), 1)
stopifnot(identical(relist(unlist(z), z), z))
summary(y)
## all failed in 3.0.2


## PR#15535 c() "promoted" raw vectors to bad logical values
stopifnot( c(as.raw(11), TRUE) == TRUE )
## as.raw(11) became a logical value coded as 11, and did not test equal to TRUE.


proc.time()
