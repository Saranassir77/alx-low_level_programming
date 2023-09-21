#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: string 1
 * @src: string 2
 * @n: integer
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int j;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[k] = src[j];
	k++;
	j++;
	}
	dest[k] = '\0';
	return (dest);
}

