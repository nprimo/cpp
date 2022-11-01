#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal(void);
	virtual WrongAnimal&	operator=(const WrongAnimal &other);
	void	makeSound() const;
	std::string		getType() const;
};

#endif
