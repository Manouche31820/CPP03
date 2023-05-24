#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void):ClapTrap("Random"){
		this->_hit_points = 100;
		this->_energy_points = 50;
		this->_attack_damage = 20;
		std::cout << " ScavTrap default constructor called" << std::endl;
	}

	ScavTrap::ScavTrap(std::string name):ClapTrap(name){
		this->_name = name;
		this->_hit_points = 100;
		this->_energy_points = 50;
		this->_attack_damage = 20;
		std::cout << "Constructor of a ScavTrap with name has been called" << std::endl;
	}

	ScavTrap& ScavTrap::operator=(const ScavTrap& b){
		if (this != &b){
			this->_name = b._name;
			this->_hit_points = b._hit_points;
			this->_energy_points = b._energy_points;
			this->_attack_damage = b._attack_damage;
		}
		return (*this);
	}

	ScavTrap::ScavTrap(const ScavTrap& a):ClapTrap(){
		*this = a;
	}

	void ScavTrap::attack(const std::string& target){
		if (this->_hit_points != 0 && this->_energy_points != 0){
			std::cout << "ScavTrap " <<  this->_name << " attacks " << target << " causing " <<  this->_attack_damage << " points of damage!" << std::endl;
			std::cout << "ScavTrap " <<  this->_name << " energy left : " << this->_energy_points << std::endl;
			std::cout << "ScavTrap " <<  this->_name << " life left : " << this->_hit_points << std::endl;
			std::cout << "ScavTrap " <<  this->_name << " attack damage is : " << this->_attack_damage << std::endl;
			this->_energy_points -= 1;
		}
		else
			std::cout << "Not enough hit or energy points" << std::endl;	
	}

	void ScavTrap::guardGate(void){
		std::cout << "Im in Gate keeper MODE" << std::endl;
	}

	ScavTrap::~ScavTrap(void){
		std::cout << "Destructor of ScavTrap called properly" << std::endl;
	}