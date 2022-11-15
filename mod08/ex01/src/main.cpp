#include "../inc/Span.hpp"
#include <cstdlib>
#include <exception>
#include <stdlib.h>

#define SIZE 10000

int main() {
    Span a (SIZE);

    srand(time(NULL));
    for (unsigned i = 0; i < a.size(); i++) {
        a.addNumber(std::rand());
    }
    try {
        a.addNumber(10);
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    //std::cout << a << std::endl;
    std::cout << "Shortest span: " << a.shortestSpan() << std::endl;
    std::cout << "Longest span: " << a.longestSpan() << std::endl;
    return 0;
}
