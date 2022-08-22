#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {

    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *lallison = new Character("lallison");
    ICharacter *kferterb = new Character("kferterb");

    AMateria *tmp = src->createMateria("ice");
    AMateria *tmp2 = src->createMateria("cure");

    lallison->equip(tmp);
    lallison->equip(tmp2);

    lallison->use(0, *kferterb);
    lallison->use(1, *kferterb);

    lallison->unequip(0);
    lallison->unequip(1);

    delete kferterb;
    delete lallison;
    delete src;
    delete tmp;
    delete tmp2;
}