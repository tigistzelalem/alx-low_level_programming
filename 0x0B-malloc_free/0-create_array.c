#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_chaecked  - allocate memory
* @b: unsigned int type
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
return (ptr);
}
}

