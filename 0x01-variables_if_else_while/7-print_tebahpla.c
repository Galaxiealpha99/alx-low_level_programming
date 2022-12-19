#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */

int main(void)
{
	char debut = 'z';
	for (debut = 'z'; debut >= 'a'; debut--)
	{
		putchar(debut);
	}
	putchar('\n');
	return (0);
}


