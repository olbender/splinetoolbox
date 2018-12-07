/*
 * MIT License
 *
 * Copyright (c) 2018 Ola Benderius
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef SPLINETOOLBOX_HPP
#define SPLINETOOLBOX_HPP

#include <algorithm>
#include <string>
#include <vector>

namespace splinetoolbox {

/**
 * @return double for the point on the Catmull-Rom spline given four control points and t=0.0 at p1 and t=1.0 at p2, assuming equal distance between points.
 */
inline double catmullrom(double p0, double p1, double p2, double p3, double t) noexcept
{
  if (t > 1.0) {
    t = 1.0;
  }
  if (t < 0.0) {
    t = 0.0;
  }
  return p1 + 0.5 * (p2 - p0) * t + 0.5 * (4 * p2 + 2 * p0 - p3 - 5 * p1) * t * t + 0.5 * (3 * p1 + p3 - p0 - 3 * p2) * t * t * t;
}

/**
 * @return double for first derivative for the Catmull-Rom spline
 */
inline double catmullrom_d(double p0, double p1, double p2, double p3, double t) noexcept
{
  if (t > 1.0) {
    t = 1.0;
  }
  if (t < 0.0) {
    t = 0.0;
  }
  return 0.5 * (p2 - p0) + (4 * p2 + 2 * p0 - p3 - 5 * p1) * t + 1.5 * (3 * p1 + p3 - p0 - 3 * p2) * t * t;
}

/**
 * @return double for second derivative for the Catmull-Rom spline
 */
inline double catmullrom_dd(double p0, double p1, double p2, double p3, double t) noexcept
{
  if (t > 1.0) {
    t = 1.0;
  }
  if (t < 0.0) {
    t = 0.0;
  }
  return (4 * p2 + 2 * p0 - p3 - 5 * p1) + 3 * (3 * p1 + p3 - p0 - 3 * p2) * t;
}

}

#endif
