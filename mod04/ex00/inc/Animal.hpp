#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal(void);
	Animal(const Animal &other);
	virtual ~Animal(void);
	virtual Animal&	operator=(const Animal &other);
	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif
