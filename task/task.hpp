/* -*-c++-*-
 * @file: task.hpp
 * @author: Dmitry Shpakov
 * @date: 2024/07/11
 * @licence: LGPL3 (see text at the end of a file)
 * @description: Task class
 */

#pragma once

#include <time.hpp>

class Task {
public:
  using TaskFunction = std::function<int(void)>;  // task function type alias

  std::string name(void) const;         // get the task name
  void run(void);                       // run the task
  bool completed(void) const;           // check if the task is completed
  void complete(void);                  // mark the task as completed
  int priority(void) const;             // get the task priority
  void setPriority(int priority) const; // set the task priority
  int pid(void) const;                  // get the task process ID
  int setPid(void);                     // set the task process ID
  Time period(void) const;              // get the task run period
  Time setPeriod(Time period);          // set the task run period
  Time lastRun(void) const;             // get the task last run time
  Time setLastRun(Time lastRun);        // set the task last run time
  Time nextRun(void) const;             // get the task next run time
  Time setNextRun(Time nextRun);        // set the task next run time
  
private:
  int mTaskPid;               // task Process ID
  std::string mTaskname;      // task name
  TaskFunction mTaskFunction; // function to be called at task execution
  int mTaskPriority;          // task priority; the less the number the higher priority
  bool mIsCompleted;          // is task competed or not
  Time mTaskPeriod;           // task run period
  Time mTaskLastRun;          // task last run time
  Time mTaskNextRun;          // task next run time
};

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

