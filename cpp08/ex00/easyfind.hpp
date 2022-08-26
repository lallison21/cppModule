#pragma once

# include <iostream>
# include <string>

template<class T>
int easyfind(T &t, int i) {
    typename T::iterator iterator;
    iterator = std::find(t.begin(), t.end(), i);

    if (iterator != t.end()) {
        return *iterator;
    } else {
        throw std::runtime_error("Not found");
    }
}
