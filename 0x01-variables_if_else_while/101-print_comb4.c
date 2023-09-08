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
	int A, B, C;

	A = 0;
	while (A <= 9)
	{
		B = 0;
		while (B <= 9)
		{
			C = 0;
			while (C <= 9)
			{
				if (A < B < C)
				{
					putchar(A + 48);
					putchar(B + 48);
					putchar(C + 48);
					if (A + B + C != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				C++;
			}
			B++;
		}
	A++;
	}
	putchar('\n');
	return (0);
}
