#include "search_algos.h"

/** linear_search - searches for a value in an array of integers using the Linear search algorithm.
*@array: array to search.
*@size: size of the array.
*@value: value to search into array.
*Return: first index when value is located in array otherwise return -1.
*/

int linear_search(int *array, size_t size, int value)
{
    int val_at_index = 0, i = 0;

    if (!array || size == 0)
        return (-1);
    
    for (; (size_t)i < size ; i++)
    {
        val_at_index = array[i];
        printf("Value checked array[%d] = [%d]\n", i, val_at_index);
        if (val_at_index == value)
        {
            return (i);
        }
    }
    return (-1);
}