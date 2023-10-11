#include "main.h"
/**
 * print_alphabet_x10 - Function to print alphabet
 */
void print_alphabet_x10(void)
{
	int loop_start = 0;
	char a;

	while (loop_start < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		loop_start++;
	}
}
