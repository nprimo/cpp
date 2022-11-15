#include "../inc/MutantStack.hpp"
#include <cstdlib>
#include <stdlib.h>

#define SIZE 10

int main() {
    MutantStack<int> mstack;
    MutantStack<int> mstack_copy;
    
    srand(time(NULL));
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    for (unsigned i = 0; i < SIZE; i++) {
        mstack.push(rand() % 100);
    }
    for (unsigned i = 0; i < SIZE; i++) {
        std::cout << mstack.top() << std::endl;
        int top = mstack.top();
        mstack.pop();
        mstack.push(top);
    }
}
