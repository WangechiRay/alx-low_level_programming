#include <stdio.h>
#include <stdlib.h>

/**
*main -prints all alphabets except q and e
*
*Return: Always 0 (Success)
*/

int main(void)
{
char let, e, q;

e = 'e';
q = 'q';

for (let = 'a'; let <= 'z'; let++)
{
if (let != q && let != e)
putchar(let);
}
putchar('\n');

return (0);
}
