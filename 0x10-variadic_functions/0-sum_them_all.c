#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int m;
	va_list lo;

	va_start(lo, n);
	if (n == 0)
		return (0);

	for (m = 0; m < n; m++)
		sum += va_arg(lo, int);

	va_end(lo);

	return (sum);
}
