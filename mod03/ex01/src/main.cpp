#include "../inc/ScavTrap.hpp"

int main(void)
{
	ClapTrap a ("mario");
	ScavTrap d ("wario");
	ScavTrap c (d);

	a.attack("luigi");
	d.attack("someone");
	a.beRepaired(3);
	for (int i = 0; i < 50; i++)
		d.attack("someone else");
	d.takeDamage(4);
	d.guardGate();
	c.guardGate();
	c.beRepaired(10);
	d.beRepaired(10);
	return (0);
}
