#include "Replace.hpp"

int main()
{
    Replace replace;

    if (replace.init())
        return 1;
    replace.replace();
    return 0;
}
