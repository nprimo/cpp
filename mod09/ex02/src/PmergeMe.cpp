#include "utils.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **input) {
	unsigned	pos = 1;
	while (input[pos]) {
		_vec.push_back(str_to_int(input[pos]));
		_deque.push_back(str_to_int(input[pos]));
		pos++;
	}
}
PmergeMe::PmergeMe(const PmergeMe &other) {
	_vec = other._vec;
}

PmergeMe::~PmergeMe() {}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other) {
	_vec = other._vec;
	return (*this);
}

void	PmergeMe::print_result() {
	std::vector<int>	sorted;
	std::cout << std::setw(20) << "Before: ";
	print_container(_vec);
	std::cout << std::setw(20) << "After: ";
	clock_t				start = clock();
	sorted = merge_sort2(_vec);
	_time_vec = clock() - start;
	start = clock();
	merge_sort2(_deque);
	_time_deque = clock() - start;
	print_container(sorted);
	std::cout << std::setw(20) << "time for vec: " << (float)_time_vec / CLOCKS_PER_SEC << std::endl;
	std::cout << std::setw(20) << "time for deque: " << (float)_time_deque / CLOCKS_PER_SEC << std::endl;
}
