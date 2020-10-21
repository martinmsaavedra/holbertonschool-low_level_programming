#include <stddef.h>
/**
 *array_iterator - executes a function given as a parameter on each element
 *of an array
 *@array: array pointer
 *@size: size of array
 *@action: function to exectue
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
