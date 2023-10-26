#include "main.h"
#include "2-strlen_recursion.c"
/**
  * is_palindrome - Function name
  * @s: String pointer
  * Return: Integar type
  */
int is_palindrome(char *s)
{
	int lens = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, lens - 1));
}
/**
  * is_palindrome_helper - Function name
  * @s: First argument6 which is a string pointer
  * @start: Start index
  * @end: End index
  * Return: integar type value
  */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
