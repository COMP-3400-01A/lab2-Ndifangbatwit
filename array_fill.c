#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc


/**
 * Fills an array with consecutive integers from begin to end.
 * Returns the number of elements actually filled.
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if (array == NULL || array_len <= 0) {
        return 0;
    }

    
    int count = 0;

    while (count < array_len && begin <= end) {
        array[count] = begin;
        count++;
        begin++;
    }

    return count;
}
