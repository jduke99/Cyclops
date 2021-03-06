% Generated by roxygen2 (4.0.1): do not edit by hand
\name{control}
\alias{control}
\title{control}
\usage{
control(maxIterations = 1000, tolerance = 1e-06,
  convergenceType = "gradient", cvType = "grid", fold = 10,
  lowerLimit = 0.01, upperLimit = 20, gridSteps = 10, cvRepetitions = 1,
  minCVData = 100, noiseLevel = "silent", seed = NULL)
}
\arguments{
\item{maxIterations}{Integer: maximum iterations of Cyclops to attempt before returning a failed-to-converge error}

\item{tolerance}{Numeric: maximum relative change in convergence criterion from successive iterations to achieve convergence}

\item{convergenceType}{String: name of convergence criterion to employ (described in more detail below)}

\item{cvType}{String: name of cross validation search.
Option \code{"auto"} selects an auto-search following BBR.
Option \code{"grid"} selects a grid-search cross validation}

\item{fold}{Numeric: Number of random folds to employ in cross validation}

\item{lowerLimit}{Numeric: Lower prior variance limit for grid-search}

\item{upperLimit}{Numeric: Upper prior variance limit for grid-search}

\item{gridSteps}{Numeric: Number of steps in grid-search}

\item{cvRepetitions}{Numeric: Number of repetitions of X-fold cross validation}

\item{minCVData}{Numeric: Minumim number of data for cross validation}

\item{noiseLevel}{String: level of Cyclops screen output (\code{"silent"}, \code{"quiet"}, \code{"noisy"})}

\item{seed}{Numeric: Specify random number generator seed. A null value sets seed via \code{\link{Sys.time}}.}
}
\value{
A Cyclops convergence criteria object of class inheriting from \code{"cyclopsConvergence"} for use with \code{fitCyclopsModel}.
}
\description{
\code{control} builds a Cyclops control object
}
\section{Criteria}{

TODO
}
\examples{
\dontrun{
# Add cross-validation example
}
}

