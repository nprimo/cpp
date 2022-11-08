#include "../inc/Conversion.hpp"
#include <cctype>

Conversion::Conversion()
{
    this->val = "";
}

Conversion::Conversion(const Conversion &other)
{
    this->val = other.getVal();
}

Conversion::Conversion(char *val) 
{
    this->val = static_cast<std::string>(val);
}

Conversion::~Conversion()
{
}

std::string Conversion::getVal() const
{
    return this->val;
}

Conversion& Conversion::operator=(const Conversion &other)
{
    this->val = other.getVal();
    return *this;
}

bool Conversion::isChar()
{
    if (this->val.size() == 1 && !std::isdigit(this->val[0]))
        return true;
    else
        return false;
}

bool Conversion::isInt()
{
    int i = 0;
    
    if (this->val[i] == '-')
        i++;
    for (i = i; i < (int)this->val.size(); i++)
    {
        if (!std::isdigit(this->val[i]))
            return false;
    }
    return true;
}

bool Conversion::isDouble()
{
    int i = 0;

    if (this->val[i] == '-')
        i++;
    for (i = i; i < (int)this->val.size(); i++) {
        if (!std::isdigit(this->val[i]))
            break ;
    }
    if (this->val[i] != '.')
        return false;
    i++;
    for (i = i; i < (int)this->val.size(); i++) {
        if (!std::isdigit(this->val[i]))
           return false; 
    }
    return true;
}

bool Conversion::isFloat()
{
    int i = 0;

    if (this->val[i] == '-')
        i++;
    for (i = i; i < (int)this->val.size(); i++) {
        if (!std::isdigit(this->val[i]))
            break ;
    }
    if (this->val[i] != '.')
        return false;
    i++;
    for (i = i; i < (int)this->val.size(); i++) {
        if (!std::isdigit(this->val[i]))
            break ;
    }
    if (this->val[i] != 'f')
        return false;
    i++;
    if (this->val[i])
        return false;
    return true;
}
