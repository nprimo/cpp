#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <sstream>   
# include <string>
# include <iomanip>

typedef enum e_type
{
    T_CHAR,
    T_INT,
    T_FLOAT,
    T_DOUBLE,
    T_OUT
} t_type;

class Conversion
{

    private:
        std::string val;
		int			val_i;
        t_type      type;
        bool        isSpecial;
    public:
        Conversion();
        Conversion(const Conversion &other);
        Conversion(char *val);
        ~Conversion();
        void        assignType();
		void		assignIsSpecial();
        std::string getVal() const;
        t_type      getType() const;
        Conversion& operator=(const Conversion &other);

        std::string toChar() const;
        std::string toInt() const;
        std::string toFloat() const;
        std::string toDouble() const;
};

std::ostream& operator<<(std::ostream& out, const Conversion &v);

#endif
