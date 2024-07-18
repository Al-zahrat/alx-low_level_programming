#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
typedef struct listint_s;
listint_t *jump_list(listint_t *list, size_t size, int value);
typedef struct skiplist_s;
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif