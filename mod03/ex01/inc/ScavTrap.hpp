
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "../inc/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);
	ScavTrap&		operator=(ScavTrap &other);
	virtual void	attack(const std::string &target);
	void			guardGate(void);
};

#endif
