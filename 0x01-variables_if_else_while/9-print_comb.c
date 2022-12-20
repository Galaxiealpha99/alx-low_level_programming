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
		putchar(debut + '0');

		if (debut < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}


