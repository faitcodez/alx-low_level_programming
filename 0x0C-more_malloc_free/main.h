#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

/**
 *
 * File: main.h
 *
 * Desc: Header file containing all prototype for all function
 * used in the 0x0C-more_mallorc_free directory
 * Return: Always 0 (Success)
 */
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
