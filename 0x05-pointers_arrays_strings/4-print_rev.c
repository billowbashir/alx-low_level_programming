#include "main.h"

/**
* print_rev - print a string in reverse.
*
*@s: the string to print in reverse.
*
*/

void print_rev(char *s)
{
int a, b;
int len = 0;

for (a = 0; s[a] != '\0'; a++)
{
len++;
}
for (b = len - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
