#pragma once

# include <iostream>
# include <string>

template<class T>
T min(const T &a, const T &b) {
    return a < b ? a : b;
}

template<class T>
T max(const T &a, const T &b) {
    return a > b ? a : b;
}

template<class T>
void swap(T &a, T &b) {
    T temp;

    temp = a;
    a = b;
    b = temp;
}
