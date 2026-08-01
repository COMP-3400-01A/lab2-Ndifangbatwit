#include <stddef.h> // For NULL

/**
 * Fills the destination array with the character c,
 * leaving space for the null terminator.
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) {
        return;
    }

    for (int i = 0; i < dest_cap - 1; i++) {
        dest[i] = c;
    }
    

    dest[dest_cap - 1] = '\0';
}
