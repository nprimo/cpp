#ifndef DATA_H
# define DATA_H

# include <iostream>

typedef unsigned long uintptr_t;
class Data
{
    private:
        std::string val;
    public:
        Data();
        Data(const Data &other);
        Data(std::string val);
        ~Data();
        std::string getVal() const;
        Data& operator=(const Data &other);
};

std::ostream& operator<<(std::ostream& out, const Data &v);

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
