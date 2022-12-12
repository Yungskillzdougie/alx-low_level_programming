#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}}
	putchar9'\n');
	return (0);
}
