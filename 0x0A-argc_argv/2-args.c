#include <stdio.h>
/**
  * main - Function name
  * @argc: Integar argument
  * @argv: Array of strings passed to command line
  * Return: Integar type
  */
int main(int argc, char **argv)
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
