#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the largest prime number
 *
 * Return: Always 0
 */
void main(void)
{
long prime = 612852475143, div;
while (div < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}
for (div = 3; div < (prime / 2); div += 2)
{
if ((prime % div) == 0)
}
}
printf("%d\n", prime);
return (0);
}
