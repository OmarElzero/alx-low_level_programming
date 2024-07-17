#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array segment
 * @array: Pointer to the array
 * @start: Starting index of the segment to print
 * @end: Ending index of the segment to print
 */
void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_rec - Recursive function to perform advanced binary search
 * @array: Pointer to the sorted array
 * @left: Left index of the current subarray
 * @right: Right index of the current subarray
 * @value: Value to search for
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */
int advanced_binary_rec(int *array, size_t left, size_t right, int value)
{
    if (left > right)
        return -1;

    size_t mid = left + (right - left) / 2;

    print_array(array, left, right);

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] != value)
            return mid;  // Found the first occurrence
        else
            return advanced_binary_rec(array, left, mid - 1, value); // Search left subarray
    }
    else if (array[mid] < value)
        return advanced_binary_rec(array, mid + 1, right, value); // Search right subarray
    else
        return advanced_binary_rec(array, left, mid - 1, value); // Search left subarray
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the sorted array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_rec(array, 0, size - 1, value);
}
