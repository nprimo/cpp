#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>

class NoMatchFound : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("No match found!");
		}
};

template< typename T >
int	easyFind(T &container, const int &value)
{
	typename T::iterator found = std::find(container.begin(), container.end(), value);
	if (found == container.end()) {
		throw NoMatchFound();
	}
	return *found;
}

#endif
