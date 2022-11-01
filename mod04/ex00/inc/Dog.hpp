#ifndef DOG_H
# define DOG_H

# include "../inc/Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog(void);
	Dog(const Dog &other);
	virtual ~Dog(void);
	Dog&	operator=(const Dog &other);
	virtual void	makeSound(void) const;
};

#endif
