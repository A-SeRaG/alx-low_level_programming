#include "main.h"

/**
 *
 * _islower - check if the charcter is in lower case
 *
 * description: checks input of function
 *
 * Return: return 1 if lowercase, otherwise 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
