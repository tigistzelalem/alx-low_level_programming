#include "main.h"
#include <stdio.h>

/**
* _srcat - a functon that concatenate two strings
* @dest: copy to
* @src: copy from
* Return: two concat strings
*/

char *_strcat(char *dest, char *src)
{
int i, n;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (n = 0; (dest[i+n] = *src++) != '\0'; n++)
{
}
return (dest);
}
