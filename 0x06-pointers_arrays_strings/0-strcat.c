#include "main.h"
/**
  * _strcat - Function name
  * @dest: String 1
  * @src: String 2
  * Return: A pointer to char which is a string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
