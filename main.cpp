#include <iostream>
#include <string>
#include <vector>

int main() {

    std::cout << "Hi, VCS! New release" << std::endl;

    if (rand() % 2) {
        std::cout << "small bug" << std::endl;
    }

    return 0;
}