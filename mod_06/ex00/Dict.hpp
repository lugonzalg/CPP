#ifndef	DICT_HPP
#define	DICT_HPP

#include <string>

class Dict
{
	private:

		std::string	*_str;
		int			_n;
		float		_f;

	public:

		Dict();
		~Dict();

		void	init();
};

#endif
