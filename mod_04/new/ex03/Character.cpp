Character::Character() {
	this->_emptyPos = 0;
	for (std::size_t ;i < this->_size; i++)
		this->_inventory[i] = NULL;
	std::cout << "Default Character constructor" << std::endl;
}

Character::Character(Character const& src) {
	std::cout << "Copy Character constructor" << std::endl;
	*this = src;
}

Character::~Character() {
	std::cout << "Default Character Destructor" << std::endl;
}

Character&	operator= (Character const& src) {
	this->_emptyPos = src._emptyPos();

}

void	equip(AMateria* m) {
	if (this->_emptyPos > 4)
		return
	this->_inventory[this->_emptyPos] = m;
	this->_emptyPos++;
}

std::size_t	getEmptyPos() { return (this->_emptyPos); }
