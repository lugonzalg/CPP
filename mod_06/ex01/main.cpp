#include <stdlib.h>
#include <fstream>

#include "Data.hpp"

static uintptr_t	serialize(Data *ptr) {
	uintptr_t	retval;
	std::fstream	file;

	retval = 0;
	file.open("porros.bin", std::ios::binary);
	if (!file.is_open())
		return (uintptr_t)NULL;
	file.write(reinterpret_cast<char *>(ptr), sizeof(Data));
	return retval;
}

static Data	*deserialize(uintptr_t raw) {
	(void)raw;
	return new Data;
}

int main() {
	Data test("Lukas", 42, 42.42f);
	uintptr_t	serialized;

	serialized = serialize(&test);
	return 0;
}
