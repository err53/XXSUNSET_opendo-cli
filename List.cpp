#include <utility>

#include <utility>

//
// Created by jhuang on 03/07/19.
//

#include "List.h"
List::List(std::string name, std::vector<Task> tasks)
        :name(std::move(name)), tasks(std::move(tasks)) { }
