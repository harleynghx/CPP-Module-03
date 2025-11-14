#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _name("Unknown"), _hitP(10), _energyP(10), _attackD(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string name) : _name(name), _hitP(10), _energyP(10), _attackD(0) {
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitP = other._hitP;
        _energyP = other._energyP;
        _attackD = other._attackD;
    }
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

// Attack function
void ClapTrap::attack(const std::string& target) {
    if (_hitP == 0) {
        std::cout << "ClapTrap " << _name << " can't attack because it has no hit points left!" << std::endl;
        return;
    }
    if (_energyP == 0) {
        std::cout << "ClapTrap " << _name << " can't attack because it has no energy points left!" << std::endl;
        return;
    }
    
    _energyP--;
    std::cout << "ClapTrap " << _name << " attacks " << target 
              << ", causing " << _attackD << " points of damage!" << std::endl;
}

// Take damage function
void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitP == 0) {
        std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
        return;
    }
    
    if (amount >= _hitP) {
        _hitP = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount 
                  << " damage and is destroyed!" << std::endl;
    } else {
        _hitP -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount 
                  << " damage! Now has " << _hitP << " hit points." << std::endl;
    }
}

// Repair function
void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitP == 0) {
        std::cout << "ClapTrap " << _name << " can't repair because it has no hit points left!" << std::endl;
        return;
    }
    if (_energyP == 0) {
        std::cout << "ClapTrap " << _name << " can't repair because it has no energy points left!" << std::endl;
        return;
    }
    
    _energyP--;
    _hitP += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount 
              << " hit points! Now has " << _hitP << " hit points." << std::endl;
}