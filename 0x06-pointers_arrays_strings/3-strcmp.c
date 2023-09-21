#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcmp - Entry point
 *
 * @s1 : the input that we deal with it
 * @s2 : the input that we deal with it
 *
 * Return:  (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int length = 0;



	while ((s1[length] != '\0') && (s2[length] != '\0'))
	{

		if (s1[length] != s2[length])
		{
			return (s1[length] - s2[length]);
		}
		length++;
	}
	return (0);




}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
