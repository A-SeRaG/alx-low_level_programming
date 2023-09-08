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

	while (C <= 'z')
	{
		if ((C == 'e') || (C == 'q'))
		{
			C++;
			continue;
		}
		else
		{
			putchar(C);
			C++;
		}
	}
	putchar('\n');
	return (0);
}
