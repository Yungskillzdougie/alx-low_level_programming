#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num > 5)
{
printf("Last digit of %u is %u and is greater than 5\n", n, num);
}
else if (num == 0)
{
printf("Last digit of %u is %u and is 0\n", n, num);
}
else if ((num < 6) & (num != 0))
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);
}
return (0);
}
