#include <stdlib.h>
#include <stdint.h>

#include <cstring>
#include <iostream>

#include "Data.hpp"

static uintptr_t	serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }

static Data	*deserialize(uintptr_t raw) {
	Data *holder;

	holder = reinterpret_cast<Data *>(raw);
	std::cout << "NAME: " << holder->name << std::endl;
	std::cout << "AGE: " << holder->age << std::endl;
	std::cout << "ACCURACY: " << holder->accuracy << std::endl;
	return holder;
}

int main() {
	uintptr_t	serialized;
	Data *holder;

	holder = new Data;
	std::memset(holder, 0, sizeof(Data));
	std::memset(holder->name, 65, 24);
	holder->age = 65;
	holder->accuracy = 42.42f;

	serialized = serialize(holder);
	holder = deserialize(serialized);
	delete holder;
	return 0;
}
