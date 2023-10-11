#include "main.h"
/**
  * print_alphabet - Function to print lowercase alphabet
  * main - Entry point of the program
  * Return: Always 0
  */
int main(void)
{
	void print_alphabet(void)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
	return (0);
}
