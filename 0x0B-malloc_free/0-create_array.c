#include <stdlib.h>
/**
  * create_array - Function name
  * @size: Size of array
  * @c: Character to make up array
  * Return: Returns a pointer to a char which is a character array
  */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	char_arr = malloc(sizeof(*char_arr) * size);

	if (char_arr == NULL)
		return (NULL);
	while (i < size)
	{
		char_arr[i] = c;
		i++;
	}
	return (char_arr);
}
