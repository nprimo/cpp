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
