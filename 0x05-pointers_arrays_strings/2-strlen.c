#include  "main.h"
#include <stdio.h>

/**
*
*str len length of a string
*@s: string
@
*return: nothing
*/
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}
