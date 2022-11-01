#include "../inc/Animal.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* z = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << z->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	z->makeSound();
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete z;
	delete meta;
}
