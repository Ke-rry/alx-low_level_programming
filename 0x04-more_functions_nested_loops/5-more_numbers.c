#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * _putchar only three times
 * Return: 0
 */
void more_numbers(void)
{
	int n, ro;

	for (ro = 0; ro <= 10; ro++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
