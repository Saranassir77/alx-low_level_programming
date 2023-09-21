#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - concatenates src string to dest string.
 *
 * @dest: firt string
 * @src: second string
 *
 * Return: (Success)
 */
char *_strcat(char *dest, char *src)
{
	int dl1 = 0;
	int sl2 = 0;
	int j = 0;
	char *res;

	while (dest[dl1] != '\0')
		dl1++;
	while (src[sl2] != '\0')
		sl2++;

	res = (char *)malloc(dl1 + sl2 + 1);

	for (j = 0; j < dl1; j++)
		res[j] = dest[j];

	for (j = 0; j < sl2; j++)
	{
		res[dl1 + j] = src[j];
		dest[dl1 + j] = src[j];
	}

	res[dl1 + sl2] = '\0';
	dest[dl1 + sl2] = '\0';

	return (res);
}
