#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << a.getRaw() << std::endl;
	std::cout << b.getRaw() << std::endl;
	std::cout << c.getRaw() << std::endl;

	return 0;
}