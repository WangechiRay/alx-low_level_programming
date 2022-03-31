#include "main.h"

/**
* factorial- returns the factorial of given number
* @n:interger of the given number
*
* Return: returns -1 if n is lower than 0 to indicate
*                   an error.
*/

int factorial(int n)
{
int res = n;
if (n < 0)

return (-1);
else if
(n >= 0 && n <= 1)
return (1);

res *= factorial(n - 1);
return (res);
}


