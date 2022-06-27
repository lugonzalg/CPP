#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
    private:

    protected:
        std::string ideas[100];

    public:
        Brain();
        Brain(std::string const&);
        Brain(Brain const&);
        ~Brain();

        Brain& operator= (Brain const&);
};

#endif
