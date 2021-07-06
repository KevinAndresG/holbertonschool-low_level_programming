#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>


void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);

#endif /* HOLBERTON_H */
