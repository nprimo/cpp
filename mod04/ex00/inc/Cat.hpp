#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat(void);
	Cat(const Cat &other);
	virtual ~Cat(void);
	Cat&	operator=(const Cat &other);
	virtual void	makeSound(void) const;
};

#endif
