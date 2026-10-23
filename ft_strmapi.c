#include "libft.h"

char *ft_strmapi(const char *s ,char (*f)(unsigned int i, char c))
{
    size_t len;
    size_t i;
    char *p;

    if(!s || !f)
        return (NULL);
    len = ft_strlen(s);
    p = malloc(sizeof(char) * (len + 1));
    if (!p)
        return (NULL);
    i = 0;
    while(s[i]){
        p[i] = f(i, s[i]);
        i++;
    }
    p[i] = '\0';
    return (p);
}