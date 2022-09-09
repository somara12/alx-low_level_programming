#include <stdio.h>
/**
 * main - Display lowercase
 *
 * Return: Always (successful)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
	putchar("%c " , c);
	putchar("\n");
    return (0);
}
