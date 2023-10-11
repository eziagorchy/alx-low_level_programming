#include "main.h"
/**
  * print_alphabet - Function to print lowercase alphabet
  * Return: Always 0
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
	return (0);
}
