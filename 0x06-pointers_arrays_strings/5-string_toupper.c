/**
 * string_toupper - changes all lowercase of a string to upper
 * @p: string will be modified
 * Return: char var
 */
#include "main.h"
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
