#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*Return: On error NULL, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *hrd;
	int c, nedu;

	if (str == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
		len++;
	hrd = malloc(sizeof(char) * (nedu + 1));

	if (hrd == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
	{
		hrd[c] = str[c];
	}

	hrd[nedu] = '\0';

	return (hrd);
}
