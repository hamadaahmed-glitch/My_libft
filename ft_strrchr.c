#include "libft.h"

char *ft_strrchr(const char *src, int c)
{
    size_t len = ft_strlen(src);
    char *p = (char *)src;

    if (c != 0 && len == 0) return (NULL);
    if (c == 0) return (p + len);

    while(--len > 0)
        if((unsigned char)c == (*p + len))
            return (p + len);
    return (NULL);
}

#include <stdio.h>

int main(){
    char *p = ft_strrchr("hello world", 'l');
    printf("the result is : %s", p);
}