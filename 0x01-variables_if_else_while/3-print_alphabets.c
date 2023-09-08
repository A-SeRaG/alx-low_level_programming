#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: A C program that prints with putchar function
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	char CH = 'A';
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
