#ifndef ABSTRACTANIMAL_HPP
# define ABSTRACTANIMAL_HPP
# include <iostream>
# include <string>

class AbstractAnimal{
protected:
    std::string type;

public:
    AbstractAnimal();
    AbstractAnimal(const std::string &type);
    AbstractAnimal(const AbstractAnimal &animal);
    virtual ~AbstractAnimal();
    AbstractAnimal &operator=(const AbstractAnimal &animal);
    const std::string &getType() const;
    virtual void makeSound() const = 0;
};

#endif
