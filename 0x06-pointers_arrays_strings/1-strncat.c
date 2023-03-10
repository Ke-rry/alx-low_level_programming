#include "main.h"

/**
 * _strncat - concatenates two strings and uses at most
 * n bytes from src
 * @dest: is the output dest
 * @src: is the input src
 * @n: number of bytes from src
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
