#include "FragTrap.hpp"

FragTrap::FragTrap() {
    _hitP = 100;
    _energyP = 100;
    _attackD = 30;
    std::cout << "default FragTrap constructor called" << std::endl;
};

FragTrap::FragTrap(std::string name) {
    _name = name;
    _hitP = 100;
    _energyP = 100;
    _attackD = 30;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
};

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "FragTrap copy constructor called" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
};

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " requests a positive high five! ✋" << std::endl;
}