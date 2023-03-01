#ifndef main_h
#define main_h

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void _puts(char *s);
int is_prime_number(int n);
int _sqrt_recursion(int n);
int _pow_recursion(int x, int y);
int factorial(int n);
int _strlen(char *s);
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
