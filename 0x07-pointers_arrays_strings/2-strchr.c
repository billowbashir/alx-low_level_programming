#include "main.h"
#include <stdio.h>
/**
 * _strchr - char s char c
 * @s: string
 * @c: char
 * Return: s or null if not found
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0' ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s != c && *s >= c)
		{
			return ('\0');
		}
	}
	return (s);
}
