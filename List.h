//
// Created by jhuang on 03/07/19.
//

#ifndef OPEN_DO_LIST_H
#define OPEN_DO_LIST_H

#include <vector>
#include <string>
#include "Task.h"

/** \brief A class that encapsulates a list
 *
 *  This class holds all the necessary data to represent a list for a to-do manager.
 *  It depends on "Task.h"
 */
class List {
public:
    // interface
    List(const std::string& name);
    List(std::string name, std::vector<Task> tasks);

protected:
    // unchecked function for use by derived class implementations
private:
    // implementation details (types, functions, and data)
    std::string name;
    std::vector<Task> tasks;

};

#endif //OPEN_DO_LIST_H
