#include <string.h>
#include "main.h"

/**
 * check_palindrome - Checks if string is palindrome
 * @s: String
 * @start: increase index to the left of the string
 * @end: decrease index to the right of the string
 * @inr: to set the base case
 * @lS: set the length of the string
 * Return: return 1 if palindrome and 0 if not
 */
int check_palindrome(char *s, int start, int end, int inr, int lS)
{
	int value;

	if (s[start] == s[end])
		value = 1;
	else
		value = 0;
	if (inr >= (lS / 2))
		return (value);
	return (check_palindrome(s, start + 1, end - 1, inr + 1, lS));
}

/**
 * is_palindrome - Checks for palindrome
 * @s: String
 * Return: return 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int start, end, counter, lengthS;

	if (s == NULL)
		return (1);
	lengthS = strlen(s);
	start = 0;
	end = lengthS - 1;
	counter = 0;
	return (check_palindrome(s, start, end, counter, lengthS));
}
