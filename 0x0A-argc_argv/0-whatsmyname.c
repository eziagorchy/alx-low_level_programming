#include <stdio.h>
/**
  * main - Function name
  * @argc: Integar argument
  * @argv: Array of strings passed to command line
  * Return: Integar type
  */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("No program name provided.\n");
	}
	return (0);
}
