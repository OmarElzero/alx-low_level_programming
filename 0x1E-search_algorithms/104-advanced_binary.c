#include "search_algos.h"
/**
* printArray - Print the elements of an array
* @array: array to be printed
* @size: size of the array
*/
void printArray(int *array, size_t size)
{
	size_t x;

	printf("Searching in array: ");
	for (x = 0; x < size; x++)
	{
		printf("%d", array[x]);
		if (x < size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search_rec - Helper function for recursive binary search
 * @array: sorted array to search in
 * @left: left index of the current subarray
 * @right: right index of the current subarray
 * @value: value to search for
 * Return: index of the value in the array, or -1 if not found
 */

int binary_search_rec(int *array, size_t left, size_t right, int value)
{
    if (left > right)
        return -1;

    size_t mid = left + (right - left) / 2;
    printArray(&array[left], right - left + 1);

    if (array[mid] == value)
        return mid;
    else if (array[mid] < value)
        return binary_search_rec(array, mid + 1, right, value);
    else
        return binary_search_rec(array, left, mid - 1, value);
}

/**
* binary_search - Searche for a value in a sorted array using binary search
* @array: sorted array to search in
* @size: size of the array
* @value: value to search for
* Return: index of the value in the array, or -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	 if (array == NULL || size == 0)
        return -1;

    return binary_search_rec(array, 0, size - 1, value);
}
