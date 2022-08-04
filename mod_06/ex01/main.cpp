#include <stdlib.h>

#include "Data.hpp"

static size_t	fill(const unsigned char *src, unsigned char *dst, size_t len) {
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	for (i = 0; i < len; i++)
		dst[i] = src[i];
	for (j = 0; j < 4; j += 2) {
		dst[i + j] = 0xff;
		dst[i + j + 1] = 0x00;
	}
	return j + i;
}

static uintptr_t	serialize(Data *ptr) {
	unsigned char	*serialBuffer;
	char	*ref;
	size_t	sz;
	int		num;

	num = ptr->getAge();
	sz = ptr->getName().size();
	sz += sizeof(ptr->getAge());
	sz += sizeof(ptr->getAccuracy());

	serialBuffer = new unsigned char[sz + 9];
	sz = fill(reinterpret_cast<const unsigned char *>(ptr->getName().c_str()), serialBuffer, ptr->getName().size());
	sz = fill(static_cast<const unsigned char*>(static_cast<const void*>(&num)), serialBuffer + sz, sizeof(int));
	//fill(reinterpret_cast<const unsigned char *>(ptr->getAccuracy()), serialBuffer, sizeof(float));
	return reinterpret_cast<uintptr_t>(serialBuffer);
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
