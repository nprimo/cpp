#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(void);
	Brain(const Brain &other);
	~Brain(void);
	Brain&	operator=(const Brain &other);
};

#endif
