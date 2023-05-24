#include "FragTrap.hpp"

	FragTrap::FragTrap(void):ClapTrap("Random"){
		this->_hit_points = 100;
		this->_energy_points = 100;
		this->_attack_damage = 30;
		std::cout << " FragTrap default constructor called" << std::endl;
	}

	FragTrap::FragTrap(std::string name):ClapTrap(name){
		this->_name = name;
		this->_hit_points = 100;
		this->_energy_points = 50;
		this->_attack_damage = 20;
		std::cout << "Constructor of a FragTrap with name has been called" << std::endl;
	}

	FragTrap& FragTrap::operator=(const FragTrap& b){
		if (this != &b){
			this->_name = b._name;
			this->_hit_points = b._hit_points;
			this->_energy_points = b._energy_points;
			this->_attack_damage = b._attack_damage;
		}
		return (*this);
	}

	FragTrap::FragTrap(const FragTrap& a):ClapTrap(){
		*this = a;
	}

	void FragTrap::attack(const std::string& target){
		if (this->_hit_points != 0 && this->_energy_points != 0){
			std::cout << "FragTrap " <<  this->_name << " attacks " << target << " causing " <<  this->_attack_damage << " points of damage!" << std::endl;
			std::cout << "FragTrap " <<  this->_name << " energy left : " << this->_energy_points << std::endl;
			std::cout << "FragTrap " <<  this->_name << " life left : " << this->_hit_points << std::endl;
			std::cout << "FragTrap " <<  this->_name << " attack damage is : " << this->_attack_damage << std::endl;
			this->_energy_points -= 1;
		}
		else
			std::cout << "Not enough hit or energy points" << std::endl;	
	}

	void FragTrap::highFivesGuys(void){
		std::cout << "GIMME FIVE !" << std::endl;
	}

	FragTrap::~FragTrap(void){
		std::cout << "Destructor of FragTrap called properly" << std::endl;
	}