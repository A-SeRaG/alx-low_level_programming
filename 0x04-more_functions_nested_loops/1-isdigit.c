#include "main.h"

/**
 * _isdigit - check from 0 to 9
 * @c: char to be checked
 *
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
