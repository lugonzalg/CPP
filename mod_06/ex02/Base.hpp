#ifndef BASE_HPP
#define BASE_HPP

class Base
{
	public:
		virtual ~Base();
};

typedef Base *(*f)(void);

#endif
