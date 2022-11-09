#ifndef BASE_H

# define BASE_H
# include <time.h>
# include <iostream>
# include <stdlib.h>

class Base
{
    private:

    public:
        virtual ~Base();
};

class A : public Base {
    private:

    public:
        A();
        ~A();
};

class B : public Base {
    public:
        B();
        ~B();
};

class C : public Base {
    public:
        C();
        ~C();
};

Base *generate();
void identify(Base *ptr);
void identify(Base &ptr);

#endif
