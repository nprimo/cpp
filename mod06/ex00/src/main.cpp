#include "../inc/Conversion.hpp"

int main(int ac, char *av[])
{
    if (ac != 2) {
        std::cout << "run program with 1 arg!" << std::endl;
        return (1);
    }
    Conversion c (av[1]);
    std::cout << "Convert " << c.getVal() << std::endl;
    std::cout << "Is char: " << c.isChar() << std::endl;
    std::cout << "Is int: " << c.isInt() << std::endl;
    std::cout << "Is double: " << c.isDouble() << std::endl;
    std::cout << "Is float: "  << c.isFloat() << std::endl;
    return (0);
}
