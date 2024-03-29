#pragma once

# include <iostream>
# include <string>

template<class T>
void iter(T *array, size_t len, void (* func)(T&)) {
    for (size_t i = 0; i < len; i++) {
        func(array[i]);
    }
}

template<class T>
void printT(T &a) {
    std::cout << a << std::endl;
}
