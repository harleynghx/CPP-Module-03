#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    // Test 1: Basic ScavTrap creation and methods
    ScavTrap scav("Guardian");
    ClapTrap clap("groot");
    
    clap.attack("mimi");
    clap.takeDamage(5);
    clap.beRepaired(2);

    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();
    scav.takeDamage(111);
    scav.guardGate();
    
    ScavTrap scav2("TempGuardian");
    scav2.guardGate();
    
    return 0;
}


// void testConstructionChain() {
//     std::cout << "\n=== Testing Construction/Destruction Chain ===" << std::endl;
//     ScavTrap scav("SC4V-TP");
//     scav.guardGate();
//     // Destructor called automatically when leaving scope
// }

// void testInheritedFunctions() {
//     std::cout << "\n=== Testing Inherited Functions ===" << std::endl;
//     ScavTrap scav("InheritanceTest");
    
//     // These use ScavTrap's overridden attack
//     scav.attack("Bandit");
//     scav.attack("Psycho");
    
//     // These use inherited functions from ClapTrap
//     scav.takeDamage(30);
//     scav.beRepaired(15);
// }

// void testDifferentValues() {
//     std::cout << "\n=== Testing Different Attribute Values ===" << std::endl;
//     ClapTrap clap("CL4P");
//     ScavTrap scav("SC4V");
    
//     std::cout << "ClapTrap attacks:" << std::endl;
//     clap.attack("Target");
//     clap.takeDamage(5);
    
//     std::cout << "\nScavTrap attacks:" << std::endl;
//     scav.attack("Target");
//     scav.takeDamage(30);
    
//     std::cout << "\nScavTrap has more hit points and energy!" << std::endl;
// }

// void testEnergyConsumption() {
//     std::cout << "\n=== Testing Energy Consumption (50 energy points) ===" << std::endl;
//     ScavTrap scav("EnergyTest");
    
//     for (int i = 0; i < 55; i++) {
//         std::cout << "Action " << (i + 1) << ": ";
//         if (i % 3 == 0) {
//             scav.attack("Dummy");
//         } else {
//             scav.beRepaired(1);
//         }
//     }
// }

// void testSpecialAbility() {
//     std::cout << "\n=== Testing Special Ability ===" << std::endl;
//     ScavTrap scav("GateKeeper");
    
//     scav.guardGate();
//     scav.attack("Intruder");
//     scav.guardGate();
// }

// void testCopyOperations() {
//     std::cout << "\n=== Testing Copy Operations ===" << std::endl;
    
//     ScavTrap original("Original");
//     original.takeDamage(20);
    
//     std::cout << "\n--- Testing copy constructor ---" << std::endl;
//     ScavTrap copy(original);
    
//     std::cout << "\n--- Testing copy assignment ---" << std::endl;
//     ScavTrap assigned;
//     assigned = original;
// }

// void testMixedTypes() {
//     std::cout << "\n=== Testing Mixed ClapTrap and ScavTrap ===" << std::endl;
    
//     ClapTrap* clapPtr = new ClapTrap("BaseRobot");
//     ScavTrap* scavPtr = new ScavTrap("DerivedRobot");
    
//     std::cout << "\n--- Bboth can attack ---" << std::endl;
//     clapPtr->attack("Enemy");
//     scavPtr->attack("Enemy");
    
//     std::cout << "\n--- But only ScavTrap can guard gate ---" << std::endl;
//     // clapPtr->guardGate(); // This would not compile!
//     scavPtr->guardGate();
    
//     delete clapPtr;
//     delete scavPtr;
// }

// int main() {
//     std::cout << "STARTING SCAVTRAP TESTS" << std::endl;
    
//     testConstructionChain();
//     testInheritedFunctions();
//     testDifferentValues();
//     testEnergyConsumption();
//     testSpecialAbility();
//     testCopyOperations();
//     testMixedTypes();
    
//     std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;
//     std::cout << "Note: Watch for proper construction/destruction order above!" << std::endl;
    
//     return 0;
// }