#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hitP(10), _energyP(10), _attackD(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitP(10), _energyP(10), _attackD(0) {
    std::cout << _name << " is constructed by ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << _name << " is getting clone" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->_name = other._name, this->_hitP = other._hitP,
        this->_energyP = other._energyP, this->_attackD = other._attackD;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hitP == 0) {
        std::cout << this->_name << " cannot attack because it has no hit points left!" << std::endl;
        return;
    }
    if (this->_energyP == 0) {
        std::cout << this->_name << " cannot attack because it has no energy points left!" << std::endl;
        return;
    }
    this->_energyP--;
    std::cout << this->_name << " attacks " << target 
              << ", causing " << this->_attackD << " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitP == 0) {
        std::cout << this->_name << " is already destroyed!" << std::endl;
        return;
    }
    if (amount >= this->_hitP) {
        this->_hitP = 0;
        std::cout << this->_name << " takes " << amount 
                  << " points of damage and is destroyed!" << std::endl;
    } else {
        this->_hitP -= amount;
        std::cout << this->_name << " takes " << amount 
                  << " points of damage! Hit points remaining: " << this->_hitP << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitP == 0) {
        std::cout << this->_name << " cannot be repaired because it is destroyed!" << std::endl;
        return;
    }
    if (this->_energyP == 0) {
        std::cout << this->_name << " cannot be repaired because it has no energy points left!" << std::endl;
        return;
    }
    this->_energyP--;
    this->_hitP += amount;
    std::cout << this->_name << " is repaired for " << amount 
              << " hit points! Total hit points: " << this->_hitP << std::endl;
}
