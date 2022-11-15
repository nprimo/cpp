#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>

template< typename T >
class MutantStack : public std::stack< T > {
    private:

    public:
		MutantStack() {}
		MutantStack(const MutantStack &other) {
			*this = other;
		}
		~MutantStack() {}
		MutantStack &operator=(const MutantStack &other) {
			this->std::stack< T >::operator=(other);
			return *this;
		}
		typedef typename std::stack< T >::container_type::iterator iterator;
		iterator begin() {
			return std::stack< T >::c.begin();
		}
		iterator end() {
			return std::stack< T >::c.end();
		}
		iterator cbegin() {
			return std::stack< T >::c.cbegin();
		}
		iterator cend() {
			return std::stack< T >::c.cend();
		}
};

#endif
