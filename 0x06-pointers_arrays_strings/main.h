#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - write the unsigned char c to stdout.
 *
 * File: main.h - prototypes of all functions.
 *
 * Desc: Header file containing prototypes for all functions
 * used in the 0x06-pointers_arrays_strings directory.
 *
 *
 * @c: character to be printed.
 * Return: 0 Always (Success)
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);

#endif
