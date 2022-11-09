#include "utils.hpp"

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

int ft_stoi(const std::string s)
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

bool isChar(std::string s)
{
    if (s.size() == 1 && !std::isdigit(s[0]))
        return true;
    else
        return false;
}

bool isInt(std::string s)
{
    int i = 0;
    
    if (s[i] == '-')
        i++;
    for (; i < (int)s.size(); i++)
    {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

bool isDouble(std::string s)
{
    int i = 0;
    std::string special_list[] = { "nan", "inf" };

    if (s[i] == '-')
        i++;
    if (isInList(s.substr(i), special_list))
        return true;
    for (; i < (int)s.size(); i++) {
        if (!std::isdigit(s[i]))
            break ;
    }
    if (s[i] != '.')
        return false;
    i++;
    for (; i < (int)s.size(); i++) {
        if (!std::isdigit(s[i]))
           return false; 
    }
    return true;
}

bool isFloat(std::string s)
{
    int i = 0;
    std::string special_list[] = { "nanf", "inff" };

    if (s[i] == '-')
        i++;
    if (isInList(s.substr(i), special_list))
        return true;
    for (; i < (int)s.size(); i++) {
        if (!std::isdigit(s[i]))
            break ;
    }
    if (s[i] != '.')
        return false;
    i++;
    for (; i < (int)s.size(); i++) {
        if (!std::isdigit(s[i]))
            break ;
    }
    if (s[i] != 'f')
        return false;
    if (s[i])
        return false;
    return true;
}
