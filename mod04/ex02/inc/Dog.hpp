#ifndef DOG_H
# define DOG_H

# include "../inc/AAnimal.hpp"
# include "../inc/Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*brain;
public:
	Dog(void);
	Dog(const Dog &other);
	~Dog(void);
	virtual Dog&	operator=(const Dog &other);
	virtual void	makeSound(void) const;
};

#endif
