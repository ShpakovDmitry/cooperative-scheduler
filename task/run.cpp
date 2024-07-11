/* -*-c++-*-
 * @file: run.cpp
 * @author: Dmitry Shpakov
 * @date: 2024/07/11
 * @licence: LGPL3 (see text at the end of a file)
 * @description: run the task
 */

#include "task.hpp"

int Task::run(void) {
  if (mTaskFunction && !mIsCompleted) {
    return mTaskFunction();
  }
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

