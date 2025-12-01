#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
    _hitP = 100;
    _energyP = 50;
    _attackD = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitP = 100;
    _energyP = 50;
    _attackD = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap copy constructor called" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) { 
    if (this != &other ) {
        ClapTrap::operator=(other);
    }
    return *this;
}
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl;
}

