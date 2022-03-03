#include <iostream>
#include <string>
#include <vector>

class Country {
  public:
    Country(const std::string &name, size_t population) : name(name), population(population) {
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

    std::cout << "Hi, VCS!" << std::endl;

    if (rand() % 2) {
        std::cout << "small bug" << std::endl;
    }

    return 0;
}