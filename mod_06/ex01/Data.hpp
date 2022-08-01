#ifndef DATA_HPP
#define DATA_HPP

class Data
{
	private:
		std::string const&	_name;

	public:
		Data();
		Data(Data const&);
		~Data();
		
		Data&	operator= (Data const&);
		int age;
		


};

#endif
