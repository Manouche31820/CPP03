#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap& operator=(const ScavTrap&);
	ScavTrap(const ScavTrap&);
	void attack(const std::string& target);
	void guardGate( void );

	~ScavTrap(void);

};
