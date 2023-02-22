#include "main.h"

/**
 * _isalpha - a function that tests if a character is from the English alphabet
 * @c: character to test
 * Return: 1 if the charcter is from the Enlish alphabet, o if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
