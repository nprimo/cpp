#include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap a ("mario");
	ClapTrap b;

	a.attack("luigi");
	b.takeDamage(2);
	a.beRepaired(3);
	return (0);
}