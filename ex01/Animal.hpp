#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal{
protected:
    std::string type;

public:
    Animal();
    Animal(const std::string &type);
    Animal(const Animal &animal);
    virtual ~Animal();
    Animal &operator=(const Animal &animal);
    const std::string &getType() const;
    virtual void makeSound() const;
};

#endif
