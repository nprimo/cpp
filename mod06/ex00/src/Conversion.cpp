#include "../inc/Conversion.hpp"
#include "../inc/utils.hpp"

Conversion::Conversion()
{
    this->val = "";
	this->val_i = 0;
    this->type = T_OUT;
    this->isSpecial = false;
}

Conversion::Conversion(const Conversion &other)
{
    this->val = other.getVal();
}

Conversion::Conversion(char *val) 
{
    this->val = static_cast<std::string>(val);
	this->assignType();
	this->assignIsSpecial();
	if (this->type == T_CHAR)
        this->val_i = (char)this->val[0];
	else
		this->val_i = ft_stoi(this->val);
}

Conversion::~Conversion()
{}

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

void Conversion::assignType()
{
    if (isChar(this->val))
        this->type = T_CHAR;
    else if (isInt(this->val))
        this->type = T_INT;
    else if (isDouble(this->val))
        this->type = T_DOUBLE;
    else if (isFloat(this->val))
        this->type = T_FLOAT;
    else
        this->type = T_OUT;
}

void Conversion::assignIsSpecial()
{
	int i = 0;
	this->isSpecial = false;
	if (this->type == T_FLOAT || this->type == T_DOUBLE)
		this->val[i] == '-' && i++;
	if (this->type == T_FLOAT)
	{
   		std::string special_list[] = { "nanf", "inff" };
		if (isInList(this->val.substr(i), special_list))
			this->isSpecial = true;
	}
	else if (this->type == T_DOUBLE)
	{
		std::string special_list[] = { "nan", "inf" };
		if (isInList(this->val.substr(i), special_list))
			this->isSpecial = true;
	}
}

std::string Conversion::toChar() const
{
    std::stringstream ss;
    std::string s;

	if (this->type == T_OUT || this->isSpecial == true)
		return "impossible";
    if (this->type == T_CHAR)
        return this->val;
    if (this->val_i < ' ' || this->val_i > '~')
        return "not displayable";
    ss << "'" << (char)this->val_i << "'";
    ss >> s;
    return s;
}

std::string Conversion::toInt() const
{
    std::string s;
    std::stringstream ss;

    if (this->isSpecial == true || this->type == T_OUT)
        return "impossible";
    if (this->type == T_INT)
        return this->val;
    ss << this->val_i;
    ss >> s;
    return (s);
}

std::string Conversion::toDouble() const
{
    std::string s;
    std::stringstream ss;

	if (this->type == T_OUT)
		return "impossible";
    if (this->type == T_INT || this->type == T_CHAR)
    {
        ss << this->val_i << ".0";
        ss >> s;
    }
    if (this->type == T_DOUBLE)
        return this->val;
    if (this->type == T_FLOAT)
        return this->val.substr(0, this->val.size() - 1);
    return s;
}

std::string Conversion::toFloat() const
{
    std::string s;
    std::stringstream ss;

	if (this->type == T_OUT)
		return "impossible";
    if (this->type == T_FLOAT)
        return this->val;
    if (this->type == T_INT || this->type == T_CHAR)
        ss << this->val_i << ".0";
    if (this->isSpecial)
        ss << this->val;
    ss << "f"; 
    ss >> s;
    return s;
}

std::ostream& operator<<(std::ostream& out, const Conversion &v)
{
    std::string type_list[] = {
        "char", "int", "float", "double", "not valid"
    };
    out << "type: " << type_list[v.getType()] << std::endl;
    out << "char: " << v.toChar() << std::endl;
    out << "int: " << v.toInt() << std::endl;
    out << "float: " << v.toFloat() << std::endl;
    out << "double: " << v.toDouble() << std::endl;
    return (out);
}
