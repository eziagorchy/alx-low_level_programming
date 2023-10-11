#include "main.h"
/**
  * print_alphabet - Function to print lowercase alphabet
  */
void print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
