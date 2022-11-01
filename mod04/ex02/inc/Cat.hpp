#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/AAnimal.hpp"
# include "../inc/Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*brain;
public:
	Cat(void);
	Cat(const Cat &other);
	~Cat(void);
	virtual Cat&	operator=(const Cat &other);
	virtual void	makeSound(void) const;
};

#endif
