#include <stdio.h>
#include "main.h"

/**
* main-prints numer of arguments passed to it
* @argc:counts the number of argumets
* @argv:array of strings
*
* Return:0
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
