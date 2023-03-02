#include "main.h"

/**
  * *cap_string - Capitalize each word in a string
  * @s: The string
  * Return: the pointer to the string
  */
char *cap_string(char *s)
{
	int i, size;
	size = strlen(s);

	for (i = 0; i <= size; i++)
	{
		if (s[i] != ' ' || s[i] != '\t' || s[i] != '.' || s[i] != '}')
		{
			++i;
			if (s[i] >= 97 || s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] != ',' || s[i] != '\n' || s[i] != '(' || s[i] != '{')
		{
			++i;
			if (s[i] >= 97 || s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] != ';' || s[i] != '!' || s[i] != '?' || s[i] != ')')
		{
			++i;
			if (s[i] >= 97 || s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
