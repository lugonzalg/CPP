#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{ 
    private:
        std::ifstream    _input;
        std::ofstream    _output;

        std::string _key;
        std::string _replace;
        std::string _filename;

        int    _create_io_stream();

    public:
        Replace();
        ~Replace();

        int     init();
        void    replace();
};

#endif
