#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 10;
	std::cout << "-- " << this->name << " ClapTrap created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 10;
	std::cout << "-- " << this->name << " ClapTrap created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "-- Copy constructor called" << std::endl;
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->energy_points = other.energy_points;
	this->hit_points = other.hit_points;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "-- " << this->name << " ClapTrap destroyed" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "-- " << "Copy assignment operator called " << std::endl;
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << \
		", causing "<< this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot attack" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " ClapTrap take following damage: " << amount << std::endl; 
	this->hit_points -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << this->name << " ClapTrap repairs the following amount: " << amount << std::endl; 
		this->hit_points += amount;
		this->energy_points--;
	}
	else
		std::cout << this->name << " ClapTrap cannot repair!" << std::endl;
	return ;
}
