#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that returns alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
