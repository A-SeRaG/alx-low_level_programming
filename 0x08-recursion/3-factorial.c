#include "main.h"

/**
 * factorial - culcolate factorial
 * @n: input
 * Return: 0 (Success)
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
