#include "main.h"
#include <stdio.h>

/**
* _strncpy - a function that copies a string
* @dest: copy to
* @src: copy from
* @n: input number of a char
* Return: Always 0(success)
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0 ; i++)
if (i < n)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
