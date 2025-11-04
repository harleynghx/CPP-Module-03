#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitP;
    unsigned int _energyP;
    unsigned int _attackD ;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();


    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);


};
//todo Question 1: why have a para constructor?
//todo Question 2: when initialising copy constructor, what does *this = other means and shouldnt we need to init one by one
//todo Question 3: why init private values in constructor is it(static const?)
//todo Question 4: copy assignement operator?

#endif
