#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */

int main(void)
{
	char debut = 'a';

	for (debut = 'a'; debut <= 'z'; debut++)
	{
		if (debut != 'e' && debut != 'q')
		{
		putchar(debut);
		}
	}
	putchar('\n');
	return (0);
}


