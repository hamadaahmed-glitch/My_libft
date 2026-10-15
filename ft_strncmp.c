#include "libft.h"
typedef unsigned char S;
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if(!n) return (0);
    while(n-- && *s1 && *s1++ == *s2) s2++;
    return (S)*s1 - (S)*s2; 
}