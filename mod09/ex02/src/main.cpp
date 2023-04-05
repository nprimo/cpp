#include "utils.hpp"


int main(int ac, char **av) {
	if (!is_preliminary_ok(ac, av)) {
		return 1;
	}
	PmergeMe	merger(av);

	merger.print_result();
	return 0;
}
