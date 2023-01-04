#include "main.h"

/**
 * main -print - alphabet
 * Is s written by gael
 * Return : no return
 */

void print_alphabet_x10(void)
{
	int letter;
	for (int i = 1; i <= 10; i++)
	{

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar (10);
	}
}
