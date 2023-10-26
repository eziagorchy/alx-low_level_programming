#include "main.h"
/**
  * wildcmp - Function name
  * @s1: Parameter 1 which is first string
  * @s2: Parameter 2 which is second string
  * Return: Integar type
  */
int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '\0' && s1[0] == '\0')
		return (1);
	else if (s2[0] == '\0')
		return (0);
	else if (s1[0] == '\0')
	{
		if (s2[0] == '*')
			return (wildcmp(s1, s2 + 1));
		return (0);
	}
	if (s2[0] == '*')
	{
		if (wildcmp(s1 + 1, s2 + 1) == 1)
			return (1);
		else if (wildcmp(s1, s2 + 1) == 1)
			return (1);
		else if (wildcmp(s1 + 1, s2) == 1)
			return (1);
	}
	if (s2[0] != s1[0])
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
