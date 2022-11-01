#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "default";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << this->name << " FragTrap created!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << this->name << " FragTrap created!" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "-- " << this->name << " FragTrap destroyed" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap &other)
{
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	return (*this);
}


void	FragTrap::highFiveGuys(void)
{
	if (this->energy_points > 0 && this->hit_points > 0)
		std::cout << this->name << ": <<give me a high five!>>" << std::endl;
	else
		std::cout << this->name << " cannot ask for high five..." << std::endl;
	return ;
}
