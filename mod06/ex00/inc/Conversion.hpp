#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <string>
# include <iomanip>

class Conversion
{
    private:
        std::string val;
    public:
        Conversion();
        Conversion(const Conversion &other);
        Conversion(char *val);
        ~Conversion();
        std::string getVal() const;
        Conversion& operator=(const Conversion &other);
        bool    isChar();
        bool    isInt();
        bool    isFloat();
        bool    isDouble();
};

#endif
