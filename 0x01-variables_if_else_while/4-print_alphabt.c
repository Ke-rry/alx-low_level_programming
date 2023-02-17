#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints lowercase alphabets except q and e
 *
 * Return: 0 (Success)
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
