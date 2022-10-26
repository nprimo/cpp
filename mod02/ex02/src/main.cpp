#include "../inc/Fixed.hpp"

int main( void )
{
	Fixed		a = Fixed(2.35f);
	Fixed 		b = Fixed(2.03f);
	Fixed 		c = Fixed(3);
	const Fixed	d( Fixed(5.05f) * Fixed(2) ); 

	std::cout << (a > b) << std::endl;
	std::cout << (b > a) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (b < a) << std::endl;
	std::cout << b << std::endl;
	std::cout << "A + B: " << (b + a) << std::endl;
	std::cout << "A - B: " << (a - b) << std::endl;
	std::cout << "B - A: " << (b - a) << std::endl;
	std::cout << "B * A: " << (b * a) << std::endl;
	std::cout << "B / A: " << (b / a) << std::endl;
	std::cout << b << std::endl;
	std::cout << "Increment post test" << std::endl;
	std::cout << "Before: " << c << std::endl;
	std::cout << "While: " << c++ << std::endl;
	std::cout << "After: " << c << std::endl;
	std::cout << "Increment pre test" << std::endl;
	std::cout << "Before: " << c << std::endl;
	std::cout << "While: " << ++c << std::endl;
	std::cout << "After: " << c << std::endl;
	std::cout << "Decrement post test" << std::endl;
	std::cout << "Before: " << c << std::endl;
	std::cout << "While: " << c-- << std::endl;
	std::cout << "After: " << c << std::endl;
	std::cout << "Decrement pre test" << std::endl;
	std::cout << "Before: " << c << std::endl;
	std::cout << "While: " << --c << std::endl;
	std::cout << "After: " << c << std::endl;
	std::cout << Fixed::min( d, a ) << std::endl;
	std::cout << Fixed::max( d, a ) << std::endl;
	return (0);
}