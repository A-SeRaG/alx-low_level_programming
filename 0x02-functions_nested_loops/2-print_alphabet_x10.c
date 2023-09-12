#include "main.h"

/**
 * print_alphabet - using _putchar function
 *
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	 	int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		if (i < 9)
			_putchar('\n');
	}
}
