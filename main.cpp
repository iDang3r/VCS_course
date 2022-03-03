#include <iostream>
#include <string>
#include <vector>

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

    std::cout << "Hi, VCS! New release" << std::endl;

    if (rand() % 2, false) {
        std::cout << "small bug" << std::endl;
    }

    return 0;
}