/**
  * int_index - Searches for an integer
  * @array: Array
  * @size: Array sie
  * @cmp: function pointer
  * Return: -1, if integer not found
  *	i, index of the element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) > 0)
			return (i);
		if (i == (size - 1))
			return (-1);
		i++;
	}
	return (-1);
}
