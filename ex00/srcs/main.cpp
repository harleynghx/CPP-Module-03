#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== Testing ClapTrap class ===" << std::endl;
    
    // Test 1: Basic construction
    std::cout << "\n--- Test 1: Construction ---" << std::endl;
    ClapTrap clap1("CL4P-TP");
    ClapTrap clap2("B4D-4SS");
    
    // Test 2: Attack functionality
    std::cout << "\n--- Test 2: Attacks ---" << std::endl;
    clap1.attack("Bandit");
    clap2.attack("Psycho");
    
    // Test 3: Taking damage
    std::cout << "\n--- Test 3: Taking damage ---" << std::endl;
    clap1.takeDamage(5);
    clap2.takeDamage(3);
    
    // Test 4: Repairing
    std::cout << "\n--- Test 4: Repairing ---" << std::endl;
    clap1.beRepaired(3);
    clap2.beRepaired(2);
    
    // Test 5: Energy consumption
    std::cout << "\n--- Test 5: Energy consumption ---" << std::endl;
    for (int i = 0; i < 12; i++) {
        std::cout << "Attack " << (i + 1) << ": ";
        clap1.attack("Target Dummy");
    }
    
    // Test 6: Destruction
    std::cout << "\n--- Test 6: Destruction ---" << std::endl;
    clap2.takeDamage(20);
    clap2.attack("Should fail");
    clap2.beRepaired(5);
    
    // Test 7: Copy constructor and assignment
    std::cout << "\n--- Test 7: Copy operations ---" << std::endl;
    ClapTrap clap3(clap1);
    ClapTrap clap4;
    clap4 = clap2;
    
    std::cout << "\n=== End of tests ===" << std::endl;
    
    return 0;
}