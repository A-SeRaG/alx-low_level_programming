#include "main.h"

/**
 *main - Entry point
 *
 * Description: A C program that prints with putchar function
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	char s[] = "_putchar";
	int C;

	for (C = 0; C < 8; C++)
		_putchar(s[C]);
	_putchar('\n');
	return (0);
}
