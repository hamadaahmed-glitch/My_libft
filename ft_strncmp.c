#include <stdio.h>
typedef unsigned char S;
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while(n-- && (*s1 || *s1 == *s2))
        if(!*s1) return (S)*s1 - (S)*s2; 
    return (0);
}