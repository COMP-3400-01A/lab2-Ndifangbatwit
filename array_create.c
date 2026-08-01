#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc


/**
 * Creates and returns a dynamically allocated array containing
 * all even numbers from begin to end, inclusive.
 * Returns NULL if there are no even numbers in the range.
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) {
        return NULL;
    }

    int first_even = begin;

    if (first_even % 2 != 0) {
        first_even++;
    }

    if (first_even > end) {
        return NULL;
    }

    int length = ((end - first_even) / 2) + 1;

    int* array = malloc(sizeof(int) * length);

    if (array == NULL) {
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        array[i] = first_even + (i * 2);
    }

    
    return array;
}
