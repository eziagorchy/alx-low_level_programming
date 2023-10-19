#include "main.h"
/**
  * _strncat - Function name
  * @dest: String 1
  * @src: String 2
  * @n: Amount of string 2 to copy to string 1
  * Return: A pointer to char (string)
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
