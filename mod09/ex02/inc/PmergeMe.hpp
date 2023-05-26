#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include "utils.hpp"

class PmergeMe {
	private:
		std::vector<int>	_vec;
		std::deque<int>		_deque;
		clock_t			_time_vec;
		clock_t			_time_deque;
	
	public:
		PmergeMe();
		PmergeMe(char **input);
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe	&operator=(const PmergeMe &other);

		void	print_result();
};

#endif
