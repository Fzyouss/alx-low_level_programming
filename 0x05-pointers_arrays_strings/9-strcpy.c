#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointers to by sfc
 * @dest: copy to
 * @sfc: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *sfc)
{
	int l = 0;
	int k = 0;

	while (*(sfc + 1) != '\0')
	{
		l++;
	}
	for ( ; k < l ; x++)
	{
		dest[x] = sfc[x];
	}
	dest[l] = '\0';
	return (dest);
}

