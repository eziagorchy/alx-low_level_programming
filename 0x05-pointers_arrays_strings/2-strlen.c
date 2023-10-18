#include "main.h"
/**
  * _strlen - Function name
  * @s: Pointer to a string parameter
  * Return: Lenght of string s
  */
int _strlen(char *s)
{
	int len_s = 0;

	while (s)
	{
		len_s++;
	}
	return (len_s);
}
