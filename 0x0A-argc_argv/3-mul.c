#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main-multiplies two numbers
* @argc:counts the number of argumets
* @argv:array of strings
*
* Return:result of multiplication
*/

int main(int argc, char *argv[])
{
int x, y;

if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
y = 1;

for (x = 1; x < 3; x++)
y *= atoi(argv[x]);

printf("%d\n", y);
}
return (0);
}
