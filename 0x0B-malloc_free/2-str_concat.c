#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: 0 or s3
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int r1 = 0, r2 = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[r1] != '\0')
		r1++;
	while (s2[r2] != '\0')
		r2++;
	r2 += r1;
	s3 = malloc(sizeof(char) * (r2 + 1));
	if (s3 == 0)
		return (0);
	for (r1 = 0; s1[r1] != '\0'; r1++)
		s3[r1] = s1[r1];
	for (r2 = 0; s2[r2] != '\0'; r1++, r2++)
		s3[r1] = s2[r2];
	s3[r1] = '\0';
	return (s3);
}

