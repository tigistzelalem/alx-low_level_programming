#include "main.h"
#include <stdio.h>

/**
* leet - entry point
* ONE if, TWO loops
* @n: input
* Return: Always 0(success)
*/

char *leet(char *n)
{
int i, x;
int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int replace[] = {'4', '3', '0', '7', '1'};
int replace[] = {
for (i = 0; n[i] != '\0'; i++)
{
for (x = 0; x <= 9; x++)
{
if (n[i] == find[x])
{
n[i] = replace[x/2];
x = 9;
}
}
}
return (n);
}
