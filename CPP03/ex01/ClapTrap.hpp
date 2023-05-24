#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap& operator=(const ClapTrap&);
	ClapTrap(const ClapTrap&);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap(void);

protected:
	
	std::string _name;
	int _hit_points;
	int _energy_points;
	int _attack_damage;

};

// std::ostream& operator<<(std::ostream&, const ClapTrap&);

#endif