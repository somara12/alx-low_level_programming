include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int x, y, z;

	for ((x = 0, y = n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;

	}
}
