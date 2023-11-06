#include <stdlib.h>
/**
  * _strdup - Function name
  * @str: String param to be duplicated
  * Return: Returns a pointer to new string
  */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;
	new_str = malloc(sizeof(char) * (i + 1));
	if (str == NULL || new_str == NULL)
		return (NULL);
	while (j < (i + 1))
	{
		new_str[j] = str[j];
		j++;
	}
	return (new_str);
}
