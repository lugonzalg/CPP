#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data
{
	private:
		std::string	_name;
		int			_age;
		float		_accuracy;

	public:
		Data();
		Data(Data const&);
		~Data();
		
		Data&	operator= (Data const&);

		std::string const& getName() const;
		int	getAge() const;
		float	getAccuracy() const;
};

#endif
