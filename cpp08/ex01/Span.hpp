#pragma once

# include <iostream>
# include <string>
# include <vector>

class Span {

private:
    unsigned int size;
    std::vector<int> vector;

public:
    ~Span();
    Span(unsigned int size);
    Span(const Span &span);
    Span &operator=(const Span &span);

    void addNumber(int i);
    int shortestSpan();
    int longestSpan();
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
