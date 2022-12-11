#include <stdio.h>
/**
 * main - main block
 * description: print the alphabet in lowercase
 * and also in uppercase, followed by new line
 * Return: o
 */
int main(void)
{
	char c = "a";

	while (c <= "z")
	{
		putchar(c);
		c++;
	}

	c = "A";

	while (c <= "Z")
	{
		putchar(c);
		c++;
	}

	putchar("\n");
	return (0);
}
