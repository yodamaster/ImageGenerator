#pragma once

#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdint>
#include <ctime>
#include <functional>
#include <vector>
#include <random>
#include <algorithm>
#include <iostream>
using namespace std;

#include "lodepng.h"

#include <boost/math/special_functions.hpp>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics.hpp>
#include <boost/bind.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/program_options.hpp>
#include <boost/lexical_cast.hpp>
using namespace boost::accumulators;
using namespace boost::math;

#include <mkl.h>
#include <omp.h>