#ifndef MAIN_H
#define MAIN_H

void _puts(char *s);
int is_prime_number(int n);
int _sqrt_recursion(int n);
int _pow_recursion(int x, int y);
int factorial(int n);
int _strlen_recursion(char *s);
void _print_rev_recursion(char *s);
int _putchar(char c);
void _puts_recursion(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif
