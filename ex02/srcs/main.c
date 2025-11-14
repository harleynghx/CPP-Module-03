#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void testFragTrapConstruction() {
    std::cout << "\n=== Testing FragTrap Construction/Destruction Chain ===" << std::endl;
    FragTrap frag("FR4G-TP");
    frag.highFivesGuys();
    // Destructor called automatically when leaving scope
}

void testFragTrapValues() {
    std::cout << "\n=== Testing FragTrap Attribute Values ===" << std::endl;
    FragTrap frag("ValueTest");
    
    std::cout << "FragTrap has:" << std::endl;
    std::cout << "- 100 hit points (vs ScavTrap's 100, ClapTrap's 10)" << std::endl;
    std::cout << "- 100 energy points (vs ScavTrap's 50, ClapTrap's 10)" << std::endl;
    std::cout << "- 30 attack damage (vs ScavTrap's 20, ClapTrap's 0)" << std::endl;
    
    frag.attack("Target");
    frag.takeDamage(50);
    frag.beRepaired(25);
}

void testFragTrapSpecialAbility() {
    std::cout << "\n=== Testing FragTrap Special Ability ===" << std::endl;
    FragTrap frag("HighFiveMaster");
    
    frag.highFivesGuys();
    frag.attack("Enemy");
    frag.highFivesGuys();
}

void testAllThreeClasses() {
    std::cout << "\n=== Testing All Three Classes Together ===" << std::endl;
    
    ClapTrap clap("CL4P-Base");
    ScavTrap scav("SC4V-Derived");
    FragTrap frag("FR4G-Derived");
    
    std::cout << "\n--- All can attack (with different messages) ---" << std::endl;
    clap.attack("Target");
    scav.attack("Target");
    frag.attack("Target");
    
    std::cout << "\n--- Testing special abilities ---" << std::endl;
    // clap.guardGate();    // Won't compile - ClapTrap doesn't have this
    // clap.highFivesGuys(); // Won't compile - ClapTrap doesn't have this
    
    scav.guardGate();      // ScavTrap special ability
    frag.highFivesGuys();  // FragTrap special ability
    
    std::cout << "\n--- Testing durability ---" << std::endl;
    clap.takeDamage(5);
    scav.takeDamage(30);
    frag.takeDamage(50);
}

void testFragTrapEnergy() {
    std::cout << "\n=== Testing FragTrap Energy (100 energy points) ===" << std::endl;
    FragTrap frag("EnergyKing");
    
    for (int i = 0; i < 105; i++) {
        std::cout << "Action " << (i + 1) << ": ";
        if (i % 2 == 0) {
            frag.attack("Dummy");
        } else {
            frag.beRepaired(1);
        }
    }
}

void testFragTrapCopyOperations() {
    std::cout << "\n=== Testing FragTrap Copy Operations ===" << std::endl;
    
    FragTrap original("OriginalFrag");
    original.takeDamage(40);
    original.highFivesGuys();
    
    std::cout << "\n--- Testing copy constructor ---" << std::endl;
    FragTrap copy(original);
    copy.highFivesGuys();
    
    std::cout << "\n--- Testing copy assignment ---" << std::endl;
    FragTrap assigned;
    assigned = original;
    assigned.highFivesGuys();
}

void testComparison() {
    std::cout << "\n=== Comparing All Three Trap Types ===" << std::endl;
    
    ClapTrap clap("Basic");
    ScavTrap scav("Guard");
    FragTrap frag("Bomber");
    
    std::cout << "\n--- Damage Comparison ---" << std::endl;
    clap.attack("Enemy");  // 0 damage
    scav.attack("Enemy");  // 20 damage  
    frag.attack("Enemy");  // 30 damage
    
    std::cout << "\n--- Endurance Comparison ---" << std::endl;
    std::cout << "ClapTrap has 10 HP, 10 EP" << std::endl;
    std::cout << "ScavTrap has 100 HP, 50 EP" << std::endl;
    std::cout << "FragTrap has 100 HP, 100 EP" << std::endl;
    
    std::cout << "\n--- Special Abilities ---" << std::endl;
    scav.guardGate();
    frag.highFivesGuys();
}

int main() {
    std::cout << "STARTING FRAGTRAP TESTS" << std::endl;
    
    testFragTrapConstruction();
    testFragTrapValues();
    testFragTrapSpecialAbility();
    testAllThreeClasses();
    testFragTrapEnergy();
    testFragTrapCopyOperations();
    testComparison();
    
    std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;
    std::cout << "Note: Watch for proper construction/destruction order!" << std::endl;
    
    return 0;
}