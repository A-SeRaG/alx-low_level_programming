#include "main.h"

/**
 * *malloc_checked - allocate memory using malloc and exit failed
 * @b: input
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *M = malloc(b);

	if (M == 0)
		exit(98);

	return (M);
}
