#include "main.h"
#include <stdio.h>

/**
*swap_int swap int values
*@a first integer
*@b second integer
* return nothing
*/

void swap_int(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
