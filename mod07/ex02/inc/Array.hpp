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
	Array() : _size(0), _content(NULL) {};
	Array(const  unsigned int n) : _size(n), _content(new T[n])
	{
		for (unsigned i = 0; i < n; i ++) {
			this->_content[i] = 0;
		}
	}
	Array(const Array &other)
	{
		this->_size = other.size();
		this->_content = new T[other.size()];
		for (unsigned i = 0; i < other.size(); i++) {
			this->_content[i] = other[i];
		}
	}
	~Array() { delete[] this->_content; }
	Array&	operator=(const T &other)
	{
		this->_size = other.size();
		delete[] this->_content;
		this->_content = new T[other.size()];
		for (unsigned i = 0; i < other.size(); i++) {
			this->_content[i] = other[i];
		}
		return *this;
	}
	T&	operator[](const unsigned pos) const {
		if (pos >= this->size()) {
			throw OutOfBounds();
		}
		return (this->_content[pos]);
	}
	unsigned	size() const { return this->_size; }
	
	class OutOfBounds : public std::exception {
		const char *what() const throw() {
			return "access denied - value out of array boundaries";
		}
	};
};

template< typename T >
std::ostream&	operator<<(std::ostream &out, const Array<T> &val) {
	for (unsigned i = 0; i < val.size(); i++) {
		out << "Val in pos " << i << ": " << val[i] << std::endl;
	}
	return out;
}

#endif
