#include "main.h"
/**
  * _puts_recursion - Function name
  * @s: Pointer to a string
  * Return: Nothing
  */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + 1);
}
