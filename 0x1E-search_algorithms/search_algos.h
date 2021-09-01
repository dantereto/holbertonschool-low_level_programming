#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binari_search(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
int helperBinary(int *array, int s, int e, int value);

#endif
