#include <iostream>
#include <string>

class Person {
    std::string name;
};

int main() {

    std::cout << "Hi, VCS!" << std::endl;

    if (rand() % 2) {
        std::cout << "small bug" << std::endl;
    }

    return 0;
}