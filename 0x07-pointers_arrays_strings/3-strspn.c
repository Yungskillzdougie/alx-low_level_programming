#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)

	{
		char *a = accept;

		while (*a && *a != *s) a++;

		if (!*a) break;

		count++;

		s++;
	}

	return count;

}
