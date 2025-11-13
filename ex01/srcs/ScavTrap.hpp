#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"
//todo Inherit constructors

//todo proper constructor chaining


class ScavTrap : public ClapTrap {
public:

    ScavTrap(const std::string& name);
    ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();


    void guardGate();
    
};

#endif