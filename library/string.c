#include "../include/string.h"


char *strcpy(char *dest, const char *src) {
    // Strings will be terminated with "\0"
    // Need to copy one byte at a time, so we can just increment our pointer variable by one

    // Check the edge case where our src is null, our our destination is null

    if (dest == NULL || src == NULL) {
        return NULL;
    }

    // Create a curr pointer to dest as we will be returning dest itself

    char *returnVal = dest;

    while (src != "\0") {
        *dest = *src;
        dest++;
        src++;
    }

    // Terminate the new dest string
    *dest = "\0";

    return returnVal;
}


char *strcat(char *dest, const char *src) {
    // TO-DO:

    return NULL;
}

void *memcpy(void *dest, const void *src, size_t n) {
    // TO-DO:

    return NULL;
}

void *memset(void *s, int c, size_t n) {
    // TO-DO:

    return NULL;
}
