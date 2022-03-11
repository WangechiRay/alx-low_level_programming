#include <stdio.h>
#include <stdlib.h>

/**
*main -the program prints the alphabets in lowercase
*
*Return:Always 0 (Success)
*/

int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
putchar(alph);
putchar('\n');

return (0);
}

