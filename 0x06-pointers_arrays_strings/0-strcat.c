#include <stdio.h>
#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @dest: s1
 * @src: s2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	while (c <= b)
	{
		dest[a] = src[c];
		c++;
		a++;
	}
	return (dest);
}
