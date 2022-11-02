#include "main.h"

/**
 * _strspn - get the length of prefix string
 * @s: the strinf we look to
 * @accept: the string we compare to
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[i]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
