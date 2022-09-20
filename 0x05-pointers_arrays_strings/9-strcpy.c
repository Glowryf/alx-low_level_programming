/**
 * _strcpy - a function that copies a string
 * @src: assigned int
 * @dest: assigned int
 * Return: dest
 */
#include "main.h"
char *_strcpy(char *dest, char *src)
{
	int abc = 0;

	while (*(src + abc) != '\0')
	{
		*(dest + abc) = *(src + abc);
			abc++;
	}
	*(dest + abc) = '\0';
	return (dest);
}
