//
// Copyright (C) OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_PORTFILTER_H
#define __INET_PORTFILTER_H

#include "inet/common/MatchableObject.h"

namespace inet {

namespace visualizer {

/**
 * This class provides a generic filter for ports. The filter is expressed
 * as a pattern using the cMatchExpression format.
 */
class INET_API PortFilter
{
  protected:
    cMatchExpression matchExpression;

  public:
    void setPattern(const char *pattern);

    bool matches(int value) const;
};

} // namespace visualizer

} // namespace inet

#endif // ifndef __INET_PORTFILTER_H

