#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
private:
    static const size_t maxIdeas = 100;
    std::string ideas[Brain::maxIdeas];

public:
    Brain();
    Brain(const Brain &brain);
    Brain &operator=(const Brain &brain);
    ~Brain();
    void setIdea(size_t index, const std::string &idea);
    const std::string &getIdea(size_t index) const;
};

#endif
