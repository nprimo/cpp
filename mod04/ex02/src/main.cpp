#include "../inc/AAnimal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

#define N_ANIMAL 10
int main(void)
{
	const AAnimal	*zoo[N_ANIMAL];

	for (int i = 0; i < N_ANIMAL / 2; i ++)
		zoo[i] = new Cat();
	for (int i = N_ANIMAL / 2; i < N_ANIMAL; i ++)
		zoo[i] = new Dog();

	for (int i = 0; i < N_ANIMAL; i++)
		zoo[i]->makeSound();
	for (int i = 0; i < N_ANIMAL; i++)
		delete zoo[i];
}
