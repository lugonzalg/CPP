#include <stdlib.h>

#include "Data.hpp"

uintptr_t	serialize(Data *ptr) {
	uintptr_t	n;
	(void)ptr;

	return n;
}

Data	*deserialize(uintptr_t raw) {
	(void)raw;
	return new Data;
}

int main() {

	return 0;
}
