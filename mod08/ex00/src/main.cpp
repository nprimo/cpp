#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <stdlib.h>
#include "easyfind.hpp"

#define LIST_SIZE 10

int main()
{
	std::list<int>		l1;
	std::vector<int>	v1;

	srand(time(NULL));
	for (unsigned i = 0; i < LIST_SIZE; i++) {
		l1.push_back(rand() % 10);
		v1.push_back(rand() % 10);
	}
	// std::list<int>::iterator it = l1.begin();
	// for (; it != l1.end(); it++) {
	// 	std::cout << std::right << std::setw(2) << *it << ' ';
	// }
	// std::cout << std::endl;
	// std::vector<int>::iterator it_v = v1.begin();
	// for (; it_v != v1.end(); it_v++) {
	// 	std::cout << std::right << std::setw(2) << *it_v << ' ';
	// }
	// std::cout << std::endl;
	try {
		std::cout << "easy find: " << easyFind(v1, 2) << std::endl;
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "easy find: " << easyFind(l1, 2) << std::endl;
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
}
