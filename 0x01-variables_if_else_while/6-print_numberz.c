#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	int d;

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	putchar('\n');
	return (0);
}
