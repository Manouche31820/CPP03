#include "ClapTrap.hpp"
#include <iostream>

int main() {

	ClapTrap Manu("Manu");
	
	Manu.beRepaired(40);
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