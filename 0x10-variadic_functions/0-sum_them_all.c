#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *
 */

 int sum_them_all(const unsigned int n, ...)

{
	unsigned int i;

	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)

		sum += va_arg(list, int);

	va_end(list);

	return (sum);

}
