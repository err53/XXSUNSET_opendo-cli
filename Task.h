//
// Created by jhuang on 03/07/19.
//

#ifndef OPEN_DO_TASK_H
#define OPEN_DO_TASK_H

#include <string>
#include <vector>

/** \brief A class that encapsulates a task
 *
 *  This class holds all the necessary data for a task in a to-do manager.
 */
class Task {
public:
    // interface
    Task(std::string name);
    Task(std::string name, std::vector<std::string> contexts);

protected:
    // unchecked function for use by derived class implementations

private:
    // implementation details (types, functions, and data)
    std::string name;
    bool completion;
    std::vector<std::string> contexts;

};

#endif //OPEN_DO_TASK_H
