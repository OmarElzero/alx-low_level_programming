#include "search_algos.h"

int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int jump = sqrt(size);
    size_t prev = 0;
    size_t step = jump;

    while (step < size && array[step] < value) {
        prev = step;
        step += jump;
    }

    for (size_t i = prev; i < fmin(step, size); i++) {
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
