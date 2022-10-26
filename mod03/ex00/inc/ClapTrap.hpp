#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap&	operator=(ClapTrap &other);
	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif