#include "Array.hpp"

//#define MAX_VAL 750

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

//    Array<int> numbers(MAX_VAL);
//    int *mirror = new int[MAX_VAL];
//
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++) {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }
//
//    for (int i = 0; i < MAX_VAL; i++) {
//        if (mirror[i] != numbers[i]) {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//
//    try {
//        numbers[-2] = 0;
//    } catch (const std::exception &e) {
//        std::cerr << e.what() << std::endl;
//    }
//
//    try {
//        numbers[MAX_VAL] = 0;
//    } catch (const std::exception &e) {
//        std::cerr << e.what() << std::endl;
//    }
//
//    for (int i = 0; i < MAX_VAL; i++) {
////        std::cout << i + 1 << ": old numbers = " << numbers[i] << " mirror = " << mirror[i] << std::endl;
//        numbers[i] = rand();
////        std::cout << i + 1 << ": new numbers = " << numbers[i] << " mirror = " << mirror[i] << std::endl;
////        std::cout << std::endl;
//    }
//
//    delete[] mirror;
//    return 0;
}
