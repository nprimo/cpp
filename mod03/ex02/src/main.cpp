#include "../inc/FragTrap.hpp"

int main(void)
{
	FragTrap a ("mario");
	FragTrap b;
	FragTrap d (b);
	FragTrap c ("princess");

	a.attack("luigi");
	d.attack("someone");
	a.beRepaired(3);
	for (int i = 0; i < 100; i++)
		d.attack("someone else");
	d.takeDamage(4);
	d.highFiveGuys();
	c.highFiveGuys();
	c.beRepaired(10);
	d.beRepaired(10);
	return (0);
}
