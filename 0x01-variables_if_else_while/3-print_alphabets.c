/**
 * main - Prints the aphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	char letter;

	for (letter =  'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
