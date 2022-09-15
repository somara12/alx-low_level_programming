#include "main.h"

/**
 * print_line -  print straight line
 * @n: n -  number of times
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(50);
		}
	}
	_putchar('\n');
}
