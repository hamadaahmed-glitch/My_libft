#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

/*void bzero(void *s, size_t n);
int isalnum(char c);
int isalpha(char c);
int isascii(int ascii);
int isdigit(char c);
int isprint(int p);
void *memset(void *b, int v, size_t s);
int strlen(char *str);
char tolower(char c);
char toupper(char c);
*/
//void *ft_memcpy(void *d, const void *s, size_t n);
//void *ft_memmove(void *dst, const void *src, size_t len);

size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *str);

#endif