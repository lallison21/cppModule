#include "Array.hpp"

int main() {


    Array<int> array;
    std::cout << array.size() << std::endl;

    Array<int> array1 = Array<int>(5);
    std::cout << array1.size() << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    Array<char> charArray = Array<char>(3);
    std::cout << charArray.size() << std::endl;
    charArray[0] = 'a';
    charArray[1] = 'c';
    charArray[2] = 'b';
    for (int i = 0; i < 3; ++i) {
        std::cout << charArray[i] << " ";
    }
    std::cout << std::endl;

    try {
        charArray[5] = 'g';
    } catch (std::exception &e) {
        std::cout << e.what();
    }

    try {
        charArray[-1] = 'g';
    } catch (std::exception &e) {
        std::cout << e.what();
    }

    return 0;
}
