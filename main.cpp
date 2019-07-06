#include <iostream>
#include <cstring>
#include <getopt.h>
#include <algorithm>
#include "List.h"

std::vector<List> lists;

int initialize_data()
{
    std::cout << "Warning! This will clear all existing data! Proceed? (y/N)" << std::endl;
    std::string c;
    std::cin >> c;
    if (c=="y") {
        lists.clear();
        lists.emplace_back(new List("Inbox"));
    }
    else {
        std::cout << "Initialization Canceled!" << std::endl;
    }
    return 0;
}

int user_interface_loop()
{
    while (true) {
        std::string input;
        std::cout << "What would you like to do? (type h for help)" << std::endl;
        std::cin >> input;

        std::transform(input.begin(), input.end(), input.begin(), ::tolower);
        if (input=="q") {
            std::cout << "Exiting..." << std::endl;
            return 0;
        }
        else if (input=="i") {
            initialize_data();
        }
        else if (input=="h") {
            std::cout << "The following options are available:" << std::endl
                      << "q: Exit Program" << std::endl
                      << std::endl;
        }
    }
}

int main(int argc, char** argv)
{
    int c;
    while ((c = getopt(argc, argv, "i"))!=-1) {
        switch (c) {
        case 'i':user_interface_loop();
            break;
        default:abort();
        }
    }

    return 0;
}