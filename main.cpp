#include <iostream>
#include "List.h"

namespace opendo {
    std::vector<List> lists;

    int initialize_data() {
        return 0;
    }

    int user_interface_loop() {
        while(true) {
            char input;
            std::cout << "What would you like to do? (type h for help)" << std::endl;
            std::cin >> input;
            switch (tolower(input)) {
            case 'h':
                std::cout << "The following options are available:" << std::endl;
                break;
            case 'q':
                std::cout << "Exiting..." << std::endl;
                return 0;
            }
        }
    }

    int main()
    {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
}