#include "main.h"
#include "2-strlen.c"
/**
  * print_rev - Function name
  * @s: Pointer to string parameter
  * Return: Nothing
  */
void print_rev(char *s)
{
	int len = _strlen(s);
	int start = len - 1;

	while (start >= 0)
	{
		_putchar(s[start]);
		start--;
	}
	_putchar('\n');
}
