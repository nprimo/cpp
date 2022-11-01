#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "../inc/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);
	FragTrap&	operator=(FragTrap &other);
	void		highFiveGuys(void);
};

#endif
