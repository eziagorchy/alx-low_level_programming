# ifndef DOG_H
#include "dog.h"
/**
  * len_st - Function name
  * @str: String to calculate the lenght
  * Return: Return int
  */
int len_st(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i + 1);
}
#endif
