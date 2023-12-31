#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * _putchar - write the unsigned char c to stdout.
 * File: main.h
 *
 * Desc: Header file containing prototypes for all functions
 * used in the 0x07-recursion directory.
 * @c: the character to print
 * Return: 0 Always (Success)
 */

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);


#endif
