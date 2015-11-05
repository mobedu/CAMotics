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

#ifndef CAMOTICS_VERTEX_SLICE_H
#define CAMOTICS_VERTEX_SLICE_H

#include "FieldFunction.h"

#include <camotics/Geom.h>
#include <camotics/Grid.h>

#include <vector>


namespace CAMotics {
  class VertexSlice : public std::vector<std::vector<bool> > {
    Grid grid;
    unsigned z;

  public:
    VertexSlice(const Grid &grid, unsigned z);

    bool isInside(unsigned x, unsigned y) const {return at(x).at(y);}

    void compute(FieldFunction &func);

    const Grid &getGrid() const {return grid;}
    unsigned getZ() const {return z;}
  };
}

#endif // CAMOTICS_VERTEX_SLICE_H
