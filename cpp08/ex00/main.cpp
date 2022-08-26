#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>

int main() {
    std::list<int> list;

    std::cout << "List: " << std::endl;
    for(int i = 0; i < 8; i++) {
        list.push_back(i);
    }
    try {
        std::cout << easyfind(list, 2) << std::endl;
        std::cout << easyfind(list, 9) << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Vector: " << std::endl;
    std::vector<int> vector;
    for (int i = 0; i < 8; i++) {
        vector.push_back(i);
    }
    try {
        std::cout << easyfind(vector, 1) << std::endl;
        std::cout << easyfind(vector, 10) << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "set: " << std::endl;
    std::set<int> set;
    for (int i = 0; i < 8; i++) {
        set.insert(i);
    }
    try {
        std::cout << easyfind(set, 0) << std::endl;
        std::cout << easyfind(set, 8) << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}
