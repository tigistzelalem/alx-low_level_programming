#include "main.h"
#include <stdio.h>

/**
* _strncat - a function that  concatenate two strings
* @dest: copy to
* @src: copy from
* @n: n
* Return: always 0(success)
*/

char *_strncat(char *dest, char*src, int n)
{
int i, co;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (co = 0; co < n; co++)
{
dest[i + co] = src[co];
if (src[co] == '\0')
co = n;
}
return (dest);
}
