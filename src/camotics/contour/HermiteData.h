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

#ifndef CAMOTICS_HERMITE_DATA_H
#define CAMOTICS_HERMITE_DATA_H

#include "ContourGenerator.h"
#include "HermiteSlice.h"

#include <cbang/SmartPointer.h>

#include <vector>

namespace CAMotics {
  class HermiteData :
    std::vector<cb::SmartPointer<HermiteSlice> >, public ContourGenerator {
  public:
    // From ContourGenerator
    cb::SmartPointer<Surface> getSurface() {return 0;}
    void run(FieldFunction &func, const Grid &grid);
  };
}

#endif // CAMOTICS_HERMITE_DATA_H

