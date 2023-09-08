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
	int A, B = 0;

	while (B <= 9)
	{
		A = 0;
		while (A <= 9)
		{
			if (B != A  && B < A)
			{
				putchar(B + 48);
				putchar(A + 48);
				if (A + B != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			A++;
		}
		B++;
	}
	putchar('\n');
	return (0);
}
