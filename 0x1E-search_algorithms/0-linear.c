#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for your function must
 * Return: Success!
 */
int linear_search(int *array, size_t size, int value)
{
    int i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i])

        if (array[i] == value)
            return (i);
    }
    return (-1);
}