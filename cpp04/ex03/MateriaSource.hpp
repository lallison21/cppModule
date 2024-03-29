#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
    AMateria *store[4];

public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(const MateriaSource &materiaSource);
    MateriaSource &operator=(const MateriaSource &materiaSource);

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif
