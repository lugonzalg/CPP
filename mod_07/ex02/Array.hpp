#ifndef ARRAY_HPP
#define ARRAY_HPP

template<class T>
class Array
{
    private:
        T           *_container;
        unsigned    sz;

    public:
        Array() {
            this->_container = NULL;
            this->sz = -1;
        };
        Array(unsigned n) {
            this=->_container =  new T[n];
            sz = n;
        };
        Array(Array const &) {
        };
        ~Array();
};

#endif
