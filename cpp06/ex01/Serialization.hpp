#pragma once

# include <string>
# include <iostream>

struct Serialization {
    char    c;
    int     i;
    float   f;
    double  d;
};

uintptr_t       serialize(Serialization* ptr);
Serialization*  deserialize(uintptr_t raw);
