#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */

int main(void)
{
	char debut = '0';
	char c = 'a';
	for (debut = '0'; debut <= '9'; debut++)
	{
		putchar(debut);
	}

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}


