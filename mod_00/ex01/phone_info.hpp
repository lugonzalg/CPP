#ifndef	PHONE_INFO_H
#define PHONE_INFO_H

#include "phone_book.hpp"

class	Phone_Info
{
	Phone_Book	list[5];
	std::string	options_phone[5];
	public:
		std::string	prompt_opt[3];
		std::string	in_data[5];
		Phone_Info (std::string);
};

#endif
