#include "main.h"
#include <stdio.h>

/**
* rot13 - encode a string to rot13
* @s: string to encode
* Return: address of s
*/

char *rot13(char *n)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; *(s + i);i++)
{
for (j = 0; j < 52; j++)
{
if (a[j] == *(s + i))
{
*(s + i) = b[j];
break;
}
}
}
return (s);
}
