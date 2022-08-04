#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data
{
	private:
		std::string 		_name;
		int					_age;
		float				_accuracy;

	public:
		Data();
		Data(std::string const&, int, float);
		Data(Data const&);
		~Data();
		
		Data&	operator= (Data const&);

		std::string getName() const;
		int	getAge() const;
		const float*	getAccuracy() const;
};

#endif
