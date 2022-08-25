#include "Serialization.hpp"

uintptr_t serialize(Serialization* ptr) {
    std::cout << "Serialization of data" << std::endl;
    return reinterpret_cast<uintptr_t>(ptr);
}

Serialization* deserialize(uintptr_t raw) {
    std::cout << "Deserialization of data" << std::endl;
    return reinterpret_cast<Serialization *>(raw);
}

int main() {

    struct Serialization *serialization = new Serialization;
    serialization->c = 's';
    serialization->d = 0.0023;
    serialization->f = 0.045f;
    serialization->i = 9;

    std::cout << "before: " << std::endl;
    std::cout << "char: " << serialization->c << std::endl;
    std::cout << "double: " << serialization->d << std::endl;
    std::cout << "float: " << serialization->f << std::endl;
    std::cout << "int: " << serialization->i << std::endl;
    std::cout << std::endl;

    uintptr_t serializationData = serialize(serialization);
    struct Serialization *returnData = deserialize(serializationData);

    std::cout << std::endl;
    std::cout << "after: " << std::endl;
    std::cout << "char: " << returnData->c << std::endl;
    std::cout << "double: " << returnData->d << std::endl;
    std::cout << "float: " << returnData->f << std::endl;
    std::cout << "int: " << returnData->i << std::endl;

    return 0;
}
