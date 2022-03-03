#include <iostream>
#include <string>
#include <vector>

class Country {
    size_t population;
    std::string name;
};

int main() {

    std::cout << "Hi, VCS!" << std::endl;

    if (rand() % 2) {
        std::cout << "small bug" << std::endl;
    }

    return 0;
}