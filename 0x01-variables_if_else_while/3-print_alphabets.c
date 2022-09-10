/**
 * main - Prints the aphabet in lower and upper case.
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	char low;

	for (low =  'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
