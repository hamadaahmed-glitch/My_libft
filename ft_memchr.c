#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *s_temp = (const unsigned char *)s;
    if(!n) return (NULL);
    while(n--)
        if(*s_temp++ == (unsigned char)c) return ((void *)(s_temp - 1));
    return (NULL);
}