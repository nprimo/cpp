#include "../inc/MutantStack.hpp"
# include <iostream>

#define SIZE 10

int main()
{
	MutantStack<int> mstack;


	mstack.push(5);
	mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	mstack.pop();
	// std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	std::cout << "copy mstack: " << std::endl;
	MutantStack<int> mstack_cp (mstack);
	MutantStack<int>::iterator it_cp = mstack_cp.begin();
	MutantStack<int>::iterator ite_cp = mstack_cp.end();
	while (it_cp != ite_cp) {
		std::cout << *it_cp << " ";
		it_cp++;
	}
	std::cout << std::endl;
	while(!mstack_cp.empty()) {
		mstack_cp.pop();
	}
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "mstack: " << std::endl;
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	return 0;
}
