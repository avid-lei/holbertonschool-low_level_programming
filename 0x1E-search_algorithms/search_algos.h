#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_help(int *array, int start, int end, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);


#endif
