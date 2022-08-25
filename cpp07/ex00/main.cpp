#include "whatever.hpp"

int main() {

    int x = 5;
	int y = 7;

	std::cout << "int\n\nmax(5, 7) = " << max(x, y)  << std::endl;
	std::cout << "min(5, 7) = " << min(x, y)  << std::endl;
	std::cout << "swap(5, 7) = x: ";
	swap(x, y);
    std::cout << x << " y: " << y  << std::endl;

    std::cout << "\n=======================================\n" << std::endl;

    char a = 'a';
    char b = 'b';

	std::cout << "char\n\nmax(a, b) = " << max(a, b)  << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "swap(a, b) = ";
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;

    std::cout << "\n=======================================\n" << std::endl;

    int i = 2;
    int j = 3;
    ::swap( i, j );
    std::cout << "a = " << i << ", b = " << j << "\n" << std::endl;
    std::cout << "min( a, b ) = " << ::min( i, j ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( i, j ) << std::endl;

    std::cout << "\n=======================================\n" << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << "\n" << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}
