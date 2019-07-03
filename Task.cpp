#include <utility>

#include <utility>

#include <utility>

//
// Created by jhuang on 03/07/19.
//

#include "Task.h"

Task::Task(std::string name)
        :name(std::move(name))
{
    completion = false;
}

Task::Task(std::string name, std::vector<std::string> contexts)
        :name(std::move(name)), contexts(std::move(contexts))
{
    completion = false;
}
