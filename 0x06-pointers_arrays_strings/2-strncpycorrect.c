#include "main.h"
/**
  * _strncpy - Function name
  * @dest: First parameter
  * @src: Second parameter
  * @n: Number of bytes to copy
  * Return: Pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int zeros;

	while (src[i] != '\0')
		i++;
	if (n <= i)
	{
		while (src[k] != '\0')
		{
			dest[j] = src[k];
			j++;
			k++;
		}
	}
	else if (n > i)
	{
		zeros = n - i;

		while (src[k] != '\0')
		{
			dest[j] = src[k];
			j++;
			k++;
		}
		while (zeros > 0)
		{
			dest[j] = '\0';
			zeros--;
		}
	}
	return (dest);
}
