#include "../inc/Fixed.hpp"

int main( void )
{
	Fixed a = Fixed(2.35f);
	Fixed b = Fixed(2.03f);

	std::cout << (a > b) << std::endl;
	std::cout << (b > a) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (b < a) << std::endl;
	std::cout << (b + a) << std::endl;
	std::cout << b << std::endl;
	return (0);
}