#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap& operator=(const FragTrap&);
	FragTrap(const FragTrap&);
	void attack(const std::string& target);
	void highFivesGuys(void);

	~FragTrap(void);

};
