#include <stdio.h>

/**
 * main- function that prints its name
 *@argc: CLI argument count
 *@argv: is the array that contains the command line arguement
 * Return: 0 - succes
*/

int main(int argc __attribute__((unused)), char * argv[])
{
	        printf("%s\n", argv[0]);
	        return (0);
}
