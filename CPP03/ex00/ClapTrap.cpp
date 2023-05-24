#include "ClapTrap.hpp"

	ClapTrap::ClapTrap(void):_hit_points(10), _energy_points(10), _attack_damage(0){
		std::cout << "Default constructor called" << std::endl;
	}

	ClapTrap::ClapTrap(std::string name):_hit_points(10), _energy_points(10), _attack_damage(0){
		this->_name = name;
		std::cout << "Constructor with name has been called" << std::endl;
	}

	ClapTrap& ClapTrap::operator=(const ClapTrap& b){
		if (this != &b){
			this->_name = b._name;
			this->_hit_points = b._hit_points;
			this->_energy_points = b._energy_points;
			this->_attack_damage = b._attack_damage;
		}
		return (*this);
	}
		ClapTrap::ClapTrap(const ClapTrap& a){
		*this = a;
	}

	void ClapTrap::attack(const std::string& target){
		if (this->_hit_points != 0 && this->_energy_points != 0){
			std::cout << "ClapTrap " <<  this->_name << " attacks " << target << " causing " <<  this->_attack_damage << " points of damage!" << std::endl;
			this->_energy_points -= 1;
		}
		else
			std::cout << "Not enough hit or energy points" << std::endl;	
	}

	void ClapTrap::takeDamage(unsigned int amount){
		std::cout << "ClapTrap " <<  this->_name << " get hit causing " <<  amount << " points of damage!" << std::endl;
		this->_hit_points -= amount;
	}

	void ClapTrap::beRepaired(unsigned int amount){
		if (this->_hit_points != 0 && this->_energy_points != 0){
			std::cout << "ClapTrap " <<  this->_name << " is being repaired and gain " <<  amount << " hit points!" << std::endl;
			this->_hit_points += amount;
			this->_energy_points -= 1;
		}
		else
			std::cout << "Not enough hit or energy points" << std::endl;
	}


	ClapTrap::~ClapTrap(void){
		std::cout << "Destructor called properly" << std::endl;
	}