#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check alphabet.
 * @void: Null value
 *
 * Description: prints the alphabet in lowercase, followed by a  new line.
 * Return;Zero value
 */

int main(void)
{
	char debut = 'a';

	for (debut = 'a'; debut <= 'z'; debut++)
	{
		putchar(debut);
	}
	putchar('\n');
	return (0);
}


