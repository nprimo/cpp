#include "../inc/Conversion.hpp"

int main(int ac, char *av[])
{
    if (ac != 2) {
        std::cout << "run program with 1 arg!" << std::endl;
        return (1);
    }
    Conversion c (av[1]);

    std::cout << c << std::endl;
    return (0);
}
