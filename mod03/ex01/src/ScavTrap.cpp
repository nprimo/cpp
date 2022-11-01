#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "-- " << this->name << " ScavTrap created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "-- " << this->name << " ScavTrap created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
	std::cout << "Scav copy constructor called" << std::endl;
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "-- " << this->name << " ScavTrap destroyed" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap &other)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	return (*this);
}


void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << this->name << " is trying to attack..." << std::endl;
	this->ClapTrap::attack(target);
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->name << " ScavTrap now in gate keeper mode" << std::endl;
	return ;
}
