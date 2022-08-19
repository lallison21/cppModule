#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

private:
    Brain *brain;

public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &Dog);
    Dog &operator=(const Dog Dog);
    virtual void makeSound() const;
    virtual void setIdeas(std::string idea);
    virtual void showIdeas();
};

#endif
