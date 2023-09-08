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
	char C = 'a';
	int a;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	while (C <= 'f')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
