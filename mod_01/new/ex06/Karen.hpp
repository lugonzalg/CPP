#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>

class Karen
{
    private:
        void    debug();
        void    info();
        void    warnings();
        void    error();

        typedef void (Karen::*t_ptr)(void);
        typedef struct s_keys
        {
            std::string key;
            t_ptr   ft_ptr;
        }   t_keys;
        t_keys  _keys[5];

    public:
                Karen();
                ~Karen();

        void    complain(std::string);
        size_t  complain_query(std::string);
};

#endif
