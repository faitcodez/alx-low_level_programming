#ifndef MAIN_H
#define MAIN_H

/**
 * *create_array - create array, define the data type
 * and specify the name of array.
 * File: main.h
 *
 * Desc: Header file containing prototype for all function
 *
 * used in the 0x0B-malloc_free directory
 * @c: character to be printed
 * @size: value assigned to a data type
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
