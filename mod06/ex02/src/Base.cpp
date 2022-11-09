#include "../inc/Base.hpp"
#include <typeinfo>


Base::~Base()
{
    std::cout << "Base destructor" << std::endl;
}

A::A()
{
    std::cout << "A in" << std::endl;
}

A::~A()
{
    std::cout << "A out" << std::endl;
}

B::B()
{
    std::cout << "B in" << std::endl;
}

B::~B()
{
    std::cout << "B out" << std::endl;
}

C::C()
{
    std::cout << "C in" << std::endl;
}

C::~C()
{
    std::cout << "C out" << std::endl;
}

Base *generate()
{
    int i;
    Base *new_base;

    srand( (unsigned)time(NULL));
    i = (std::rand() % 3);
    switch (i) {
        case 0:
            new_base = new A();
            break ;
        case 1:
            new_base = new B();
            break ;
        case 2:
            new_base = new C();
            break ;
    }
    return static_cast<Base*>(new_base);
}

void identify(Base *ptr)
{
    std::cout << "Base of type: "; 
    if (A *p = dynamic_cast<A *>(ptr)) 
        std::cout << "A" << std::endl;
    if (B *p = dynamic_cast<B *>(ptr)) 
        std::cout << "B" << std::endl;
    if (C *p = dynamic_cast<C *>(ptr)) 
        std::cout << "C" << std::endl;
}

void identify(Base &ptr)
{
    std::cout << "Base of type: ";
    try {
        ptr = dynamic_cast<A &>(ptr);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast) {}
    try {
        ptr = dynamic_cast<B &>(ptr);
        std::cout << "B" << std::endl;
    } catch (std::bad_cast) {}
    try {
        ptr = dynamic_cast<C &>(ptr);
        std::cout << "C" << std::endl;
    } catch (std::bad_cast) {}
}
