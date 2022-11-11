#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <stdlib.h>

typedef unsigned long size_t;
template< typename T >
class Array
{
private:
	size_t	_size;
 	T		*_content;
public:
	Array() {
		this->_content = NULL;
		this->_size = 0;
	}
	Array(const  unsigned int n) {
		this->_size = n;
		this->_content = new T[n];
		for (unsigned i = 0; i < n; i ++) {
			this->_content[i] = 0; // is this default good for every case?
		}
	}
	Array(const Array &other) {
		*this = other;
	}
	~Array() {
		delete this->_content;
	}
	Array&	operator=(const T &other) const {
		this->_size = other.size();
		this->_content = new T[other.size()];
		for (unsigned i = 0; i < other.size(); i++) {
			this->_content[i] = other[i];
		}
		return *this;
	}
	T&	operator[](const unsigned pos) const {
		if (pos > this->size()) {
			throw OutOfBounds();
		}
		return (this->_content[pos]);
	}
	unsigned	size() const {
		return this->_size;
	}
	
	class OutOfBounds : public std::exception {
		const char *what() const throw() {
			return "access denied - value out of array boundaries";
		}
	};
};

#endif
