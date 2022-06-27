Cure::Cure() {
	this->_type = "fire";
	std::cout << "Default Cure constructor" << std::endl;
}

Cure::Cure(std::string const& type) {
	std::size_t	len;
	char	*str;

	str = type.c_str();
	len = type.size();
	for (std::size_t i = 0; i < len; i++)
		str[i] = str.tolower(str[i]);
	this->_type = type.
	std::cout << "String Cure constructor" << std::endl;
}

Cure::Cure(Cure const& src) {
	std::cout << "Copy Cure constructor" << std::endl;
	*this = src;
}

Cure::~Cure() {
	std::cout << "Default Cure destructor" << std::endl;
}

Cure&	Cure::operator= (Cure const& src) {
	this->_type = src._type;
	return (*this);
}

AMateria*	clone() { return (new Cure); }

void	use(ICharacter* target) {
	std::cout << "heals " << taget->getName() << "'s wounds" << std::endl;
}
