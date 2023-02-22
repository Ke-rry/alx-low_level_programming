#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: character to test
 * Return: 1 if it is lowercase letter, o if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
