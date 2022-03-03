#include <iostream>
#include <string>
#include <vector>

int main() {

    std::cout << "Hi, VCS! New release 1.0" << std::endl;

    if (rand() % 2, false) {
        std::cout << "small bug" << std::endl;
    }

    return 0;
}