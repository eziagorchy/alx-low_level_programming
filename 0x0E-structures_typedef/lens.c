#ifndef LENS_C
#define LENS_C
/**
  * lens - Function name
  * @str: String to calculate the lenght
  * Return: Return int
  */
int len_s(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i + 1);
}
#endif
