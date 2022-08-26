#include "Span.hpp"
#include <vector>

int main() {

    std::cout << std::endl;
    std::cout << "Append: " << std::endl;
    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() <<  std::endl;

    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    Span a(3);
    std::cout << std::endl;
    std::cout << "Range: " << std::endl;
    a.addRange(vector.begin(), vector.end());
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;
}
