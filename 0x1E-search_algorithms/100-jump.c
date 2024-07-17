#include "search_algos.h"
/**
 * jump_search- an algorithem for jump search
 *
 * Return: 0 Always SUCCESS
 */

int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int jump = sqrt(size);
    size_t prev = 0;
    size_t step = jump;

    while (step < size && array[step] < value) {
        printf("Value checked array[%lu] = [%d]\n", step, array[step]);
        prev = step;
        step += jump;
    }

    if (step < size) {
        printf("Value checked array[%lu] = [%d]\n", step, array[step]);
    } else {
        printf("Value checked array[%lu] = [%d]\n", size - 1, array[size - 1]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    for (size_t i = prev; i < fmin(step, size); i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
