#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hitP(10), _energyP(10), _attackD(0) {
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitP(10), _energyP(10), _attackD(0) {
    std::cout << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "Copy Constructor called" << std::endl;

}
//? use copy assignment operator

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->_name = other._name, this->_hitP = other._hitP,
        this->_energyP = other._energyP, this->_attackD = other._attackD;
    }
    return *this;
}
//? " *this " dereferences the this pointer to get the object itself

ClapTrap::~ClapTrap() {
    std::cout << "destructor called" << std::endl;
}

//todo attack method
void ClapTrap::attack(const std::string& target) {
    if (_hitP != 0 && _energyP != 0) {
        _energyP--;
        std::cout << "Clap trap attacked " << target << "for " << this->_attackD  << "HP" << std::endl;

    }
}

//todo takeDamage method
void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name << "got attack and lose " << amount << "hit points." << std::endl;
}

//todo Berepaired method
void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitP != 0 && _energyP != 0)
    {
        std::cout << "Reparing Claptrap for " << amount << "hit points" << std::endl;
        this->_hitP = _hitP + amount;
    }
}
