#ifndef CAT_HPP
# define CAT_HPP
# include "AbstractAnimal.hpp"
# include "Brain.hpp"

class Cat : public AbstractAnimal {
private:
    Brain *brain;

public:
    Cat();
    Cat(const Cat &src);
    virtual ~Cat();
    Cat &operator=(const Cat &src);
    virtual void makeSound() const;
    void setIdea(size_t index, const std::string &idea);
    const std::string &getIdea(size_t index) const;
};

#endif
