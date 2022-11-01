#include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap a ("mario");
	ClapTrap c (a);
	ClapTrap b;

	a.attack("luigi");
	b.takeDamage(2);
	a.beRepaired(3);
	b = c;
	for (int i = 0; i < 10; i++)
	{
		a.attack("someone else");
		c.attack("a tiger");
	}
	b.attack("nobody");
	return (0);
}
