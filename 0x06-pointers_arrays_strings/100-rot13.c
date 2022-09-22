#include "main.h"
#include <stdio.h>

/**
* rot13 - encode string to rot13
* @n: string to encode
* Return: address of n
*/

char *rot13(char *n)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
;
char b[] = "nopqrstuvwxyxabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; *(s + i); i++)
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
