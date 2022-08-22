#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria &aMateria) {
    *this = aMateria;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
    if (this != &aMateria) {
        this->_type = aMateria._type;
    }
    return *this;
}

AMateria::AMateria(const std::string &type) : _type(type) {
}

const std::string &AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter &target) {
    (void)target;
}
