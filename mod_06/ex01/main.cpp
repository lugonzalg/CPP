#include <stdlib.h>

#include "Data.hpp"

static uintptr_t	serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(serialBuffer);
}

static Data	*deserialize(uintptr_t raw) {
	return new Data;
}

int main() {
	Data test("Lukas", 42, 42.42f);
	uintptr_t	serialized;

	serialized = serialize(&test);
	return 0;
}
