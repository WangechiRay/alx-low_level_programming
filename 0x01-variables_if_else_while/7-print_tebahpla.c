#include <stdio.h>
#include <stdlib.h>

/**
*main - program is printed in lowercase alphabets in reverse
*
*Return: Always 0 (Success)
*/

int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev--)
putchar(rev);
putchar('\n');

return (0);
}
