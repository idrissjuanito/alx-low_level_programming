#ifndef MAIN_H
#define MAIN_H

char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *string_toupper(char *);
int _abs(int);
int _isalpha(int c);
int _isdigit(int c);
int _islower(int c);
int _isupper(int c);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _strcmp(char *s1, char *s2);
int _strlen_recursion(char *s);
int add(int n1, int n2);
int convert_day(int month, int day);
int factorial(int n);
int is_palindrome(char *s);
int is_prime_number(int n);
int largest_number(int a, int b, int c);
int mul(int a, int b);
int print_last_digit(int);
int print_sign(int n);
unsigned int _strspn(char *s, char *accept);
void _print_rev_recursion(char *s);
int _putchar(char c);
void _puts_recursion(char *s);
void jack_bauer(void);
void more_numbers(void);
void positive_or_negative(int i);
void print_alphabet(void);
void print_alphabet_x10(void);
void print_chessboard(char (*a)[8]);
void print_diagonal(int n);
void print_diagsums(int *a, int size);
void print_line(int n);
void print_most_numbers(void);
void print_numbers(void);
void print_remaining_days(int month, int day, int year);
void print_square(int size);
void print_times_table(int n);
void print_to_98(int n);
void print_triangle(int size);
void reverse_array(int *a, int n);
void set_string(char **s, char *to);
void times_table(void);
#endif