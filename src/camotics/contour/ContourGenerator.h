/******************************************************************************\

    CAMotics is an Open-Source simulation and CAM software.
    Copyright (C) 2011-2015 Joseph Coffland <joseph@cauldrondevelopment.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

\******************************************************************************/

#ifndef CAMOTICS_CONTOUR_GENERATOR_H
#define CAMOTICS_CONTOUR_GENERATOR_H

#include "Surface.h"
#include "FieldFunction.h"

#include <camotics/Task.h>
#include <camotics/Grid.h>

#include <cbang/SmartPointer.h>
#include <cbang/os/Mutex.h>
#include <cbang/util/SmartLock.h>


namespace CAMotics {
  class ContourGenerator : public Task {
    double lastTime;

  public:
    ContourGenerator() : lastTime(0) {}

    void updateProgress(double progress);

    virtual cb::SmartPointer<Surface> getSurface() = 0;
    virtual void run(FieldFunction &func, const Grid &grid) = 0;
  };
}

#endif // CAMOTICS_CONTOUR_GENERATOR_H

