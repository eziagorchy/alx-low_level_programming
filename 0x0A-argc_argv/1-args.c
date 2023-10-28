#include <stdio.h>
/**
  * main - Function name
  * @argc: Integar argument
  * @argv: Array of strings passed to command line
  * Return: Integar type
  */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
