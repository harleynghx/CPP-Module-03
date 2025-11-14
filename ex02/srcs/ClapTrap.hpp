#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
protected: 
    std::string _name;
    unsigned int _hitP;
    unsigned int _energyP;
    unsigned int _attackD;

public:

    ClapTrap();
    ClapTrap(std::string _name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    virtual ~ClapTrap();

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif

