#include <iostream>
#include <string>

class Person {
  public:
    Person(const std::string &name) : name_(name) {
    }

  private:
    std::string name_;
};

int main() {

    std::cout << "Hi, VCS!" << std::endl;

    if (rand() % 2) {
        std::cout << "small bug" << std::endl;
    }

    return 0;
}