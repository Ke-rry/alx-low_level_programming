#include "main.h"

/**
 * puts2 - prints every other character in a string starting with the first one
 * followed by a new line
 * @str: string to be input
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[len]);
	}

	_putchar('\n');
}
