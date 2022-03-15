#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long f = 0, k = 1, sum;
float tot_sum;

while (1)
{
sum = f + k;
if (sum > 4000000)
break;

if ((sum % 2) == 0)
tot_sum += sum;

f = k;
k = sum;
}
printf("%.0f\n", tot_sum);

return (0);
}
