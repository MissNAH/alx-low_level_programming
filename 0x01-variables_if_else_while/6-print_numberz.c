#include <stdio.h>

/**
 * main - prints alphabets without char and use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
