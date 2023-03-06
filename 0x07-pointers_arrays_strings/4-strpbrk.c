#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept; input
 * Return: always 0 (success)
 */
char *_strpbrk(char *accept, char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (n = 0; accept[n] != '\0'; n++)
	{
	if (s[i] == accept[n])
	return (s + i);
	}
	}
	return (NULL);
}
