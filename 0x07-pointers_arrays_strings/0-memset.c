#include "main.h"

/**
 * memeset - fiils a memory block with a constant byte
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n); {
	for (unsigned int i = 0; i < n; i++) {
		s[i] = b;
	}

	return s;
}
