#ifndef DOG_HPP
# define DOG_HPP
# include "AbstractAnimal.hpp"
# include "Brain.hpp"

class Dog : public AbstractAnimal {
private:
    Brain *brain;

public:
    Dog();
    Dog(const Dog &src);
    virtual ~Dog();
    Dog &operator=(const Dog &src);
    virtual void makeSound() const;
    void setIdea(size_t index, const std::string &idea);
    const std::string &getIdea(size_t index) const;
};

#endif
