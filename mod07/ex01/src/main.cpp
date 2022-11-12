#include "iter.hpp"


void print_plus_one(int a)
{
	a++;
	std::cout << a << std::endl;
}

const void print_plus_one_const(int a)
{
	a++;
	std::cout << a << std::endl;
}

int main()
{
	int arr_int[] = {1, 2, 3};

	::iter(arr_int, 3, print_plus_one);
	::iter(arr_int, 3, print_plus_one_const);
	for (int i = 0; i < 3; i++) {
		std::cout << arr_int[i] << std::endl;
	}
}
