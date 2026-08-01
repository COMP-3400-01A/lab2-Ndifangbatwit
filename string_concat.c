#include <stddef.h> // For NULL

/**
 *  Concatenates src2 onto the end of src1 without exceeding
 * the capacity of src1.
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL || src1_cap <= 0) {
        return;
    }

    int src1_len = 0;

    // Find the end of the existing string in src1
    while (src1_len < src1_cap && src1[src1_len] != '\0') {
        src1_len++;
    }

    
    // If there is no null terminator within the capacity,
    // there is no valid string to concatenate onto.
    if (src1_len >= src1_cap) {
        return;
    }

    int i = 0;

    // Add src2 while leaving room for '\0'
    while (src2[i] != '\0' && src1_len + i < src1_cap - 1) {
        src1[src1_len + i] = src2[i];
        i++;
    }

    // Null terminate the resulting string
    src1[src1_len + i] = '\0';
}

