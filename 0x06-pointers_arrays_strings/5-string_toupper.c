#include "main.h"
#include <stdio.h>

/**
* string_toupper - aa function that change all lower of a string to upper
* @n: input string
* Return: a capitalized string
*/

char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
}
return (0);
}
