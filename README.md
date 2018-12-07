## splinetoolbox: a simple header-only, single-file spline toolbox library for C++

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

splinetoolbox is a small and efficient library written in modern C++ library to provide functionality for working with splines

splinetoolbox is available as single-file, header-only library. Insert [splinetoolbox.hpp](https://raw.githubusercontent.com/olbender/splinetoolbox/master/splinetoolbox.hpp) into your project, `#include "splinetoolbox.hpp"`, and compile your project with a modern C++ compiler (C++11 or newer).


## Table of Contents
* [Features](#features)
* [Dependencies](#dependencies)
* [Contributing](#contributing)
* [License](#license)


## Features
* Written in highly portable and high quality C++11
* **Available as header-only, single-file distribution. Insert [splinetoolbox.hpp](https://raw.githubusercontent.com/olbender/splinetoolbox/master/splinetoolbox.hpp) into your project, `#include "splinetoolbox.hpp"`, and compile your project with a modern C++ compiler (C++11 or newer)**
* Catmull-Rom spline: `double curve = splinetoolbox::catmullrom(p0, p1, p2, p3, t);` where p[0&ndash;3] are the control points (can be x, y, z or anything else), and t is the distance between p1 (t = 0.0) and p2 (t = 1.0), assuming that the distance betwwen all four points are the same. p0 and p3 are virtual points for this single segment, but can be part of a larger spline.


## Dependencies
No dependencies! All you need is a C++11-compliant compiler as the project ships the following dependencies as part of the source distribution:

* [Unit Test Framework Catch2](https://github.com/catchorg/Catch2/releases/tag/v2.1.1) - [![License: Boost Software License v1.0](https://img.shields.io/badge/License-Boost%20v1-blue.svg)](http://www.boost.org/LICENSE_1_0.txt) - [Source](https://github.com/olbender/splinetoolbox/blob/master/test/catch.hpp)


## Installation
### Installation as single-file, header-only library
splinetoolbox is provided as header-only, single-file library as well. Insert [splinetoolbox.hpp](https://raw.githubusercontent.com/olbender/splinetoolbox/master/splinetoolbox.hpp) into your project, `#include "splinetoolbox.hpp"`, and compile your project with a modern C++ compiler (C++11 or newer)

## License
* This project is released under the terms of the MIT License - [![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
