#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    Animal   *jungle[42];
    Cat     cat_1, cat_3;
    Cat     cat_2(cat_1);
    int i = 0;

    cat_3 = cat_2;;
    cat_1.brainAddr();
    cat_2.brainAddr();
    cat_3.brainAddr();
    for (;i < 21; i++)
        jungle[i] = new Dog();
    for (;i < 42; i++)
        jungle[i] = new Cat();
    for (i = 0; i < 42; i++)
        delete jungle[i];
    return 0;
}
