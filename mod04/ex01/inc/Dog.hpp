#ifndef DOG_H
# define DOG_H

# include "../inc/Animal.hpp"
# include "../inc/Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog(void);
	Dog(const Dog &other);
	virtual ~Dog(void);
	Dog&	operator=(const Dog &other);
	virtual void	makeSound(void) const;
};

#endif
