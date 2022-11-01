#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "../inc/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string	name;
	unsigned	hit_points;
	unsigned	energy_points;
	unsigned	attack_damage;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap&	operator=(ScavTrap &other);
	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif
