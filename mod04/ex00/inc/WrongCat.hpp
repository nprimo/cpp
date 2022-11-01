#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "../inc/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat(void);
	WrongCat(const WrongCat &other);
	virtual ~WrongCat(void);
	WrongCat&	operator=(const WrongCat &other);
	void	makeSound() const;
};

#endif
