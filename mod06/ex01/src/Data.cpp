#include "../inc/Data.hpp"

Data::Data()
{}

Data::Data(const Data &other)
{
    this->val = other.getVal();
}

Data::Data(std::string val) 
{
    this->val = val;
}

Data::~Data()
{}

std::string    Data::getVal() const
{
    return this->val;
}

Data& Data::operator=(const Data &other)
{
    this->val = other.getVal();
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Data &v)
{
    out << v.getVal();
    return (out);
}

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
