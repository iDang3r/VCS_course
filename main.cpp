#include <iostream>
#include <string>
#include <vector>

class Person {
  public:
    Person(const std::string &name) : name_(name) {
    }

    void print() {
        std::cout << "Person: " << name_ << std::endl;
    }

  private:
    std::string name_;
};

class Country {
  public:
    Country(const std::string &name, size_t population) : name(name), population(population) {
#ifdef DEBUG
        assert(name.size() > 0 && isupper(name[0]));
#endif
    }

    void print() {
        std::cout << "Country " << name << std::endl;
        std::cout << "population: " << population << std::endl;
    }

  private:
    size_t population;
    std::string name;
};

int main() {

    std::cout << "Hi, VCS! New release 1.1 on main" << std::endl;

    if (rand() % 2, false) {
        std::cout << "small bug" << std::endl;
    }

    int a = 0;
    std::cout << "input a: ";
    std::cin >> a;
    std::cout << "a^2: " << a * a << std::endl;

    return 0;
}