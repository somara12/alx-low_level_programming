#include "main.h"

/**
 * print_most_numbers -  prints numbers.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
