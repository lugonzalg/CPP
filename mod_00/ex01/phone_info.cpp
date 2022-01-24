#include "phone_info.hpp"

Phone_Info::Phone_Info (std::string str)
{
	short int	i;

	prompt_opt[0] = "ADD";
	prompt_opt[1] = "SEARCH";
	prompt_opt[2] = "EXIT";
	i = -1;
	while (++i < 5)
	{
		options_phone[i] = str;
		in_data[i] = str;
	}
}
