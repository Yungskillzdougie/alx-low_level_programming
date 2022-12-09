#include <stdio.h>
/**
 * main - print out sizes of data types C
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("Size of a char: %lu byte(S)\n", sizeof(a));
	printf("Size of an int: %lu byte(S)\n", sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", sizeof(c));
	printf("Size of a long long: %lu byte(S)\n", sizeof(d));
	printf("Size of a float: %lu byte(S)\n", sizeof(f));
	return (0);
}
