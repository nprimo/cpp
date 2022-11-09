#include "../inc/Conversion.hpp"
#include <string>

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
    this->isSpecial = false;
}

Conversion::Conversion(const Conversion &other)
{
    this->val = other.getVal();
    this->type = T_OUT;
    this->isSpecial = false;
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

t_type  Conversion::getType() const
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

bool isInList(std::string val, std::string list[])
{
    int list_size = 2; 

    for (int i = 0; i < list_size; i++)
    {
        if (val.compare(0, list[i].size() + 1, list[i]) == 0)
            return true;
    }
    return false;
}

bool Conversion::isDouble()
{
    int i = 0;
    std::string special_list[] = { "nan", "inf" };

    if (this->val[i] == '-')
        i++;
    if (isInList(this->val.substr(0), special_list))
    {
        this->isSpecial = true;
        return true;
    }
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
    std::string special_list[] = { "nanf", "inff" };

    if (this->val[i] == '-')
        i++;
    if (isInList(this->val.substr(0), special_list))
    {
        this->isSpecial = true;
        return true;
    }
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

void Conversion::assignType()
{
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

std::ostream& operator<<(std::ostream& out, const Conversion &v)
{
    std::string type_list[] = {
        "char", "int", "float", "double", "not valid"
    };
    out << "type: " << type_list[v.getType()] << std::endl;
    out << "char: " << v.getVal() << std::endl;
    out << "int: " << v.getVal() << std::endl;
    out << "float: " << v.getVal() << std::endl;
    out << "double: " << v.getVal() << std::endl;
    return (out);
}
