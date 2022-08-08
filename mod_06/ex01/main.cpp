#include <stdlib.h>
#include <stdint.h>
#include <fstream>

#include "Data.hpp"

uintptr_t	serialize(Data *ptr) {
	std::ofstream oSerial;

	oSerial.write(ptr, std::ios::binary);

	return oSerial;
}

Data	*deserialize(uintptr_t raw) {
	(void)raw;
	return new Data;
}

int main() {

	return 0;
}
