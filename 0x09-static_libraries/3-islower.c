/**
 * _islower - prints 1 or 0 depending on input
 * @c: first parameter
 *
 * Description: prints all lowercase letters
 *
 * Return: Always 0 (Success)
 *
 */
#include "main.h"
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
