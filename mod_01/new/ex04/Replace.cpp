#include "Replace.hpp"

Replace::Replace() {}

Replace::~Replace() {}

int    Replace::init()
{
    std::cout << "First str1: ";
    std::cin >> this->_key;
    std::cout << std::endl << "Sencond str2: ";
    std::cin >> this->_replace;
    std::cout << std::endl << "filename: ";
    std::cin >> this->_filename;
    if (not this->_key.length() or not this->_replace.length() or not this->_filename.length() or this->_create_io_stream())
    {
        std::cerr << "Error: Wrong parameters" << std::endl;
        return 1;
    }
    return 0;
}

int    Replace::_create_io_stream()
{
    this->_input.open(this->_filename.c_str());
    if (this->_input.fail())
        return 1;
    this->_filename = this->_filename.substr(0, this->_filename.find('.'));
    this->_output.open((this->_filename + ".replace").c_str());
    return 0;
}

void    Replace::replace()
{
    std::string     buffer;
    ssize_t         pos;

    while (std::getline(this->_input, buffer) and this->_input.good())
    {
        pos = buffer.find(this->_key);
        while (pos != -1)
        {
            this->_output << buffer.substr(0, pos);
            this->_output << this->_replace;
            buffer.erase(0, pos + this->_key.length());
            pos = buffer.find(this->_key);
        }
        if (pos == -1 and buffer.length())
            this->_output << buffer;
        this->_output << std::endl;
    }
}
