#include "main.h"

/**
 * _strncpy - copy string from src to dest
 * @dest: input string
 * @src: input string
 * @n: number of elements to copy
 * Return: string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
