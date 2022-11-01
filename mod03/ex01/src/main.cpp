#include "../inc/ScavTrap.hpp"

int main(void)
{
	ClapTrap a ("mario");
	ClapTrap b;
	ScavTrap d ("wario");
	ScavTrap c;

	a.attack("luigi");
	b = a;
	b.takeDamage(2);
	d.attack("someone");
	a.beRepaired(3);
	d.takeDamage(4);
	d.guardGate();
	c = d;
	c.guardGate();
	c.beRepaired(10);
	return (0);
}
