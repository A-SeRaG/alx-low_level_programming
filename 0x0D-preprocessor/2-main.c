#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from, followed by a new line.
 * Return: always 0 (Success)
*/

int main ()
{
	printf("%s\n", __FILE__);
	return (0);
}
