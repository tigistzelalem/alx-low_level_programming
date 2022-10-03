#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* description: prints the name of the function
* @argc: amount of argument passed through the program
* @argv: pointer that contians the arrays of thr argument
* return: 0
*/

int main(int argc, char *argv[]_attribute_((unused)))
{
int i = argc - 1;
printf("%d\n", i);
return (0);
}
