#include <stdlib.h>
#include "function_pointers.h"
/**
  * print_name - Function name to print name
  * @name: Name to print
  * @f: Function pointer that accepts a string and returns nothing
  * Return: Void
  */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
