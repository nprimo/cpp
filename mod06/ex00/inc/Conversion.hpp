#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <sstream>   
# include <string>
# include <iomanip>

class Conversion
{
    typedef enum e_type
    {
        T_CHAR,
        T_INT,
        T_FLOAT,
        T_DOUBLE,
        T_OUT
    } t_type;

    private:
        std::string val;
        t_type      type;
    public:
        Conversion();
        Conversion(const Conversion &other);
        Conversion(char *val);
        ~Conversion();
        std::string getVal() const;
        t_type      getType() const;
        Conversion& operator=(const Conversion &other);
        bool        isChar();
        bool        isInt();
        bool        isFloat();
        bool        isDouble();
};

std::ostream& operator<<(std::ostream& out, const Conversion &v);

int ft_stoi(const std::string s);

#endif
