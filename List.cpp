#include <utility>

#include <utility>

//
// Created by jhuang on 03/07/19.
//

#include "List.h"
List::List(const std::string& name)
        :name(name) { }
List::List(std::string name, std::vector<Task> tasks)
        :name(std::move(name)), tasks(std::move(tasks)) { }
