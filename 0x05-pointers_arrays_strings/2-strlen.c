#include "main.h"
/**
  * _strlen - Function name
  * @s: Pointer to a string parameter
  * Return: Lenght of string s
  */
int _strlen(char *s)
{
	int i = 0;
	int len_s = 0;

	while (s[i] != '\0')
	{
		len_s++;
		i++;
	}
	return (len_s);
}
