#ifndef STRING_H_  
#define STRING_H_

//strcpy, strcat, memcpy, memset

char *strcpy(char *dest, const char *src);

char *strcat(char *dest, const char *src);

void *memcpy(void *dest, const void *src, size_t n);

void *memset(void *s, int c, size_t n);

#endif