#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int rec_search(int *array, size_t size, int value);
int advanced_binary_rec(int *array, size_t left, size_t right, int value);
void print_array(int *array, size_t start, size_t end);

#endif /* SEARCH_ALGOS_H */
