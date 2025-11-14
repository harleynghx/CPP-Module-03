#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <ClapTrap.hpp>
#include <string>

class ScavTrap : public ClapTrap {  
public:

    ScavTrap(std::string name);
    ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap(); 

    void guardGate();

};


#endif

