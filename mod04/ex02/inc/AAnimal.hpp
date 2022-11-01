#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal(void);
	AAnimal(const AAnimal &other);
	virtual ~AAnimal(void) = 0;
	virtual AAnimal&	operator=(const AAnimal &other);
	virtual void	makeSound() const = 0;
	std::string		getType() const;
};

#endif
