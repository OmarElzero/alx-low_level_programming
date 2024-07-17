#include "search_algos.h"
/**
  * linear_search - Searches for a value in a sorted array
  *               of integers using linear search
  * @array: ptr to first element of the array to search
  * @size: number of elements in the array
  * @value: value to search for
  * Return: If the value is not present or the array is NULL, -1
  *         Otherwise, the first index where the value is located
  * Description: Prints a value every time it loops in the array
  *        
  */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if(array == NULL)
		return (-1);


	for (x = 0; x < size; x++)
	{
         if(array[x]== value)
        {
            return x;
        }
        
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
       
		
	}
}
