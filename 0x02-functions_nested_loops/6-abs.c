#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
