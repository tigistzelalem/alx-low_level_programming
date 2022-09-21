#include "main.h"
#include <stdio.h>

/**
* reverse_array - a function that reverse the content of an array to int
* @: content
* @n: element of content
* Return: Always 0(success)
*/

void reverse_array(int *a, int n)
{
int i, tmp;
for ( i= 0; i<n; i++)
{
n--;
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}
