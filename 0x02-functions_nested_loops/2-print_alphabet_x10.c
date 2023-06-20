#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet,
 * in lowercase followed by a new line
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char lower_case;

	while (count++ <= 9)
	{
		for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
			_putchar(lower_case);
		_putchar('\n');
	}
}
