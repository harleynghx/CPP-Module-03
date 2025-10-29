#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("none") {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
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

//todo When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
//todo When ClapTrap repairs itself, it regains <amount> hit points. Attacking and repairing
//todo each cost 1 energy point. Of course, ClapTrap can’t do anything if it has no hit points or
//todo energy points left. However, since these exercises serve as an introduction, the ClapTrap
//todo instances should not interact directly with one another, and the parameters will not refer
//todo to another instance of ClapTrap. 

//todo first check if it has any _hitP or _energyP left. 

//todo attack method
void ClapTrap::attack(const std::string& target) {
    if (_hitP != 0 && _energyP != 0) {
        _energyP--;
        
    }

}

//todo takeDamage method
void ClapTrap::takeDamage(unsigned int amount) {

}

//todo Berepaired method
void ClapTrap::beRapaired(unsigned int amount) {

}
