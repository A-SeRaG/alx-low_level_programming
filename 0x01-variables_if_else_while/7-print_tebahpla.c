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
	char C = 'z';

	while (C >= 'a')
	{
		putchar(C);
		C--;
	}
	putchar('\n');
	return (0);
}
