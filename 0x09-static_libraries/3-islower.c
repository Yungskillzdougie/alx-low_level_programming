#include "main.h"

[2;2R[>77;30601;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000/**
 * _islower - check for lowercase
 *
 * @c: ASCII code
 *
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
