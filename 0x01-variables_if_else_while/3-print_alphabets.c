#include <stdio.h>

/**
 * main - print alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'Z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
