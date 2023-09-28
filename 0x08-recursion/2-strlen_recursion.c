#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string (i).
*/

int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
