#include "utils.hpp" 


int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Run program with 1 argument!" << std::endl;
        return 1;
    }

	if (!is_valid_input(av[1])) { 
		std::cout << "Error!" << std::endl;
		return 1;
	}
	RPN	rpn(av[1]);

	try {
		int result = rpn.resolve();
		std::cout << result << std::endl;
	} catch(const char *e) {
		std::cout << e << std::endl;
	}
    return 0;
}
