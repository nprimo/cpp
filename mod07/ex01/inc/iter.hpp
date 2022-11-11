#ifndef ITER_H
# define ITER_H
# include <iostream>

template< typename T>
void	iter(T array[], const unsigned &len, void (*f)(T))
{
	for (unsigned i = 0; i < len; i++) {
		try {
			f(array[i]);
		} catch(std::exception e) {
			std::cout << "error: " << e.what() << std::endl;
		}
	}
}

#endif
