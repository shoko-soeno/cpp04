#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal &animal);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &animal);
    const std::string &getType() const;
    void makeSound() const;
};

#endif
