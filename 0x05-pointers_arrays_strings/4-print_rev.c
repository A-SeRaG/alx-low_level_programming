#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string
*/

void print_rev(char *s)
{
	int L, i;

	for (L = 0; *s != '\0'; s++)
		L++;
	s--;
	for (i = L; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
