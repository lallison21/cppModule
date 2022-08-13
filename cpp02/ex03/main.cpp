#include "Point.hpp"

int main() {

	if (bsp(Point(4.6, -1.02),
			Point(6.3, 4.38),
			Point(12.14, 2.58),
			Point(7.78, 2.38))) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}

	if (bsp(Point(4.6, -1.02),
			Point(6.3, 4.38),
			Point(12.14, 2.58),
			Point(4.72, 0.24))) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
}