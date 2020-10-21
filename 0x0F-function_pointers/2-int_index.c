/**
 *int_index - searches for an integer
 *@array: array to search within
 *@size: size of the array
 *@cmp: pointer to function
 *Return: index of element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (0);
	for (i = 0; i < size, i++)
	{
		if (!(cmp(array[i])))
			return (i);
	}

}
