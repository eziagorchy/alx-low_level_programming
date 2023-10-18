#include "main.h"
#include "2-strlen.c"
/**
  * rev_string - Function name
  * @s: Pointer to string parameter
  * Return: Nothing
  */
void rev_string(char *s)
{
	int len = _strlen(s);
	int end = len - 1;
	int start = 0;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
