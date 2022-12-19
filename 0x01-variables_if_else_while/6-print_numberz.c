#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */

int main(void)
{
	int debut = 0;

	for (debut = 0; debut <= 9; debut++)
	{
		putchar(debut % 10 + '0');
	}
	putchar('\n');
	return (0);
}


