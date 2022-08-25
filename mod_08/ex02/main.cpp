#include <iostream>
#include "mutantstack.hpp"

static void	s_iterator() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	(void)it;
	(void)ite;
/*	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
<<<<<<< HEAD
	*/
}

static void	constant_iterator() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::const_iterator it = mstack.cbegin();
	MutantStack<int>::const_iterator ite = mstack.cend();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

static void	s_reverse_iterator() {

}

static void	constant_reverse_iterator() {

}

int main()
{
	s_iterator();
	constant_iterator();
	s_reverse_iterator();
	constant_reverse_iterator();
return 0;
}
