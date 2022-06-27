#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    /*const Animal* doggy = new Dog();
    const Animal* kitty = new Cat();

    delete doggy;//should not create a leak
    delete kitty;*/

    Animal  fail;
    Animal   *jungle[42];
    Cat     ref1, ref2;
    int i = 0;

    ref1 = ref2;
    std::cout << "Type: " << ref1.getType() << std::endl;

    for (;i < 21; i++)
        jungle[i] = new Dog();
    for (;i < 42; i++)
        jungle[i] = new Cat();
    for (i = 0; i < 42; i++)
        delete jungle[i];
}
