#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: 0
 */
int main(void)
{
	int c;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (c = 1; c <= 100; c++)
	{
		if (c == 100)
			printf("%s", b);
		else if ((c % 3 == 0) && (c % 5 == 0))
			printf("%s", fb);
		else if (c % 3 == 0)
			printf("%s", f);
		else if (c % 5 == 0)
			printf("%s", b);
		else
			printf("%d", c);
	}
	printf("\n");
	return (0);
}
