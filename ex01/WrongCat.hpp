#ifndef WrongCat_HPP
# define WrongCat_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &src);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &src);
    void makeSound() const;
};

#endif
