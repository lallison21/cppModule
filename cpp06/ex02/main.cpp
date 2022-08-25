#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <random>

Base *generate() {

    std::srand(static_cast<unsigned int>(time(0)));
    int i = rand() % 3;

    switch (i) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return NULL;
}

void identify(Base *p) {

    if (dynamic_cast<A *>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base &p) {

    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast &e) {
    }

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (std::bad_cast &e) {
    }

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (std::bad_cast &e) {
    }
}

int main() {

    Base *base = generate();

    std::cout << "identify(base): ";
    identify(base);
    std::cout << "identify(&base): ";
    identify(*base);

    delete base;
    return 0;
}
