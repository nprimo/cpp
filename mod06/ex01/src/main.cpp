#include "../inc/Data.hpp"

int main()
{
    Data a ("ciao");
    Data *b;
    uintptr_t raw; 

    std::cout << "intial value: " << a << std::endl;
    raw = serialize(&a);
    std::cout << "serialize data: " << raw << std::endl;
    b = deserialize(raw);
    std::cout << "deserialize data: " << *b << std::endl;
    return (0);
}
