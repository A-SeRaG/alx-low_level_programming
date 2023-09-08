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
	int N = 0;

	while (N <= 9)
	{
		putchar(N + 48);
		if (N != 09)
		{
			putchar(',');
			putchar(' ');
		}
		N++;
	}
	putchar('\n');
	return (0);
}
