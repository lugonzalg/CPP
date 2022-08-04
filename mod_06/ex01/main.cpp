#include <stdlib.h>

#include "Data.hpp"
#include <iostream>

static uintptr_t	serialize(Data *ptr) {
	char	*serialized;
	return reinterpret_cast<uintptr_t>(ptr);
}

static Data	*deserialize(uintptr_t raw) {
	(void)raw;
	return new Data;
}

int main() {
	Data test("Lukass", 42, -1.42f);
	uintptr_t	serialized;
	char	*ser;

	serialized = serialize(&test);
	ser = reinterpret_cast<char *>(serialized);

	std::cout << sizeof(serialized);
	return 0;
}
