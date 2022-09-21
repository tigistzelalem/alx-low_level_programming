#include "main.h"
#include <stdioh>

/**
* _strcmp - a function that compares two strings
* @s1: input one
* @s2: inpute two
* Return: Always 0(success)
*/

int _strcmp(char *s1, char*s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
return (0);
}
