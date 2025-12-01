#include "ScavTrap.hpp"

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
    std::cout <<  _name << " is constructed by ScavTrap!" << std::endl;
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
    std::cout << _name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hitP == 0) {
        std::cout << _name << " is destroyed and cannot attack!" << std::endl;
        return;
    }
    if (_energyP == 0) {
        std::cout << _name << " has no energy to attack!" << std::endl;
        return;
    }
    
    _energyP--;
    std::cout << _name << " viciously attacks " << target 
              << ", causing " << _attackD << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    if (_hitP == 0) {
        std::cout <<  _name << " is destroyed and cannot guard the gate!" << std::endl;
        return;
    }
    std::cout <<  _name << " has entered Gate Keeper mode!" << std::endl;
}

