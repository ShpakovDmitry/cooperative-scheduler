/* -*-c++-*-
 * @file: name.cpp
 * @author: Dmitry Shpakov
 * @date: 2024/07/11
 * @licence: LGPL3 (see text at the end of a file)
 * @description: get the name of the task
 */

#include <string>
#include "task.hpp"

std::string Task::name(void) const {
  return mTaskName;
}
 
/*

Copyright © 2024 Dmitry Shpakov

This library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published
by the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, see <http://www.gnu.org/licenses/>.

*/

