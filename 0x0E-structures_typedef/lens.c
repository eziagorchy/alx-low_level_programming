/**
  * lens - Function name
  * @str: String to calculate the lenght
  * Return: Return int
  */
int lens(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i + 1);
}
