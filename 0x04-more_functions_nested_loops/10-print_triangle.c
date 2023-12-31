#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				_putchar(' ');
			for (k = 1; k <= size - j + 1; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
