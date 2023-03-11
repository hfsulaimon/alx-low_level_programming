#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point of C
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, count = 0;

	for (i = 1; i < argc; i++)
	{
		count = count + 1;
	}
	printf("%d\n", count);
	return (0);
}
