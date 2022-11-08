#include "../inc/Conversion.hpp"

int ft_stoi(const std::string s)
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

Conversion::Conversion()
{
    this->val = "";
    this->type = T_OUT;
}

Conversion::Conversion(const Conversion &other)
{
    this->val = other.getVal();
    if (this->isChar())
        this->type = T_CHAR;
    else if (this->isInt())
        this->type = T_INT;
    else if (this->isDouble())
        this->type = T_DOUBLE;
    else if (this->isFloat())
        this->type = T_FLOAT;
    else
        this->type = T_OUT;
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

Conversion::t_type  Conversion::getType() const
{
    return this->type;
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

std::ostream& operator<<(std::ostream& out, const Conversion &v)
{
    out << "char: " << "something" << std::endl;
    out << "int: " << "something" << std::endl;
    out << "float: " << "something" << std::endl;
    out << "double: " << "something" << std::endl;
    return (out);
}
