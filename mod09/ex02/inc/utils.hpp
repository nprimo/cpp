#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <time.h>

# include <vector>
# include <deque>

# include "PmergeMe.hpp"

bool	is_valid_input(char **input_num);
bool	is_preliminary_ok(int ac, char **av);
int		str_to_int(char *int_str);
void	print_result();

template<typename T>
void	print_container(T container) {
	for (typename T::iterator i = container.begin(); i != container.end(); i++) {
		std::cout << std::setw(6) << *i << " ";
	}
	std::cout << std::endl;
}

// sorting 
template<typename T>
T	merge2( T left, T right) {
	T	result;

	unsigned i = 0, j = 0;
	while (i < left.size() && j < right.size()) {
		if (left[i] < right[j]) {
			result.push_back(left[i]);
			i++;
		} else {
			result.push_back(right[j]);
			j++;
		}
	}
	while (i < left.size()) {
		result.push_back(left[i]);
		i++;
	}
	while (j < right.size()) {
		result.push_back(right[j]);
		j++;
	}
	return result;
}

template<typename T>
T	merge_sort2(T container) {
	if (container.size() == 1)
		return container;

	unsigned mid = container.size() / 2;	
	T	left, right;

	unsigned pos = 0;
	while (pos < container.size()) {
		if (pos < mid)
			left.push_back(container[pos]);
		else
			right.push_back(container[pos]);
		pos++;
	}

	left = merge_sort2(left);
	right = merge_sort2(right);
	return merge2(left, right);
}
#endif
