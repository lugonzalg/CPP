#ifndef ARRAY_HPP
#define ARRAY_HPP

template<class T>
class Array
{
    private:
        T           *_container;
        unsigned    _sz;

    public:
        Array() {
            this->_container = NULL;
            this->_sz = -1;
        }

        Array(unsigned n) {
            this->_container =  new T[n];
            _sz = n;
        }

        Array(Array const &src) {
            this->_container =  new T[src.getSize()];
            *this = src;
        }

        ~Array() {
            if (this->_container)
                delete [] this->_container;
        }

        Array&  operator= (Array const& src) {
            this->_sz = src.getSize();
            for (unsigned i = 0; i < this->_sz; i++) {
                this->_container[i] = src._container[i];
            }
            return *this;
        }

        T&   operator[] (int i){
            if (i < 0)
                throw Array::UnderFlowArray();
            else if (i >= static_cast<int>(this->_sz))
                throw Array::OverFlowArray();
            return this->_container[i];
        }     

        unsigned    getSize() const { return this->_sz; }

        class UnderFlowArray : virtual public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "The index is lower than 0";
            }
        };

        class OverFlowArray : virtual public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "The index is greater than Array size";
            }
        };
};

#endif
