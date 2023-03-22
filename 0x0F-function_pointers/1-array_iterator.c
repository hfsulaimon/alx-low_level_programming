#include <stddef.h>

/**
  * array_iterator - Executes a function that takes an array element
  * @array: Array
  * @size: size of the array
  * @action: function pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
