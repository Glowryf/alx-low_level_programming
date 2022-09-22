/**
 * _strcat - concatenates two strings
 * @dest: a pointer tothe string to be concatenated from
 * @src: the source string to be appended to @dest
 * Return: a pointer to the destination string @dest
 */
#include "main.h"
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
