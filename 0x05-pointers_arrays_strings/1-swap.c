#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: first entry
 * @b: second entry
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
