/**
 * rev_string - reverses a string
 * @s: string input
 * Return: no return
 */
#include "main.h"
#include <string.h>
void rev_string(char *s)
{
	char m;
	int i, l;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		m = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = m;
	}
}
