#include "FragTrap.hpp"

#include <iostream>

int main() {

	ClapTrap Manu("Manu");
	FragTrap Phap("Phap");
	
	// Manu.guardGate();
	Phap.highFivesGuys();
	Manu.beRepaired(40);
	Phap.beRepaired(10);
	Phap.attack("Manu");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.attack("Phap");
	Manu.beRepaired(40);
	Manu.takeDamage(51);
	Manu.attack("Phap");
	// std::cout << Manu._hit_points << std::endl;
return 0;
}