#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *temp;
    char *result = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
    if(!result)
        return (NULL);

    temp = result;
    while(*s1)
        *temp++ = *s1++;
    while(*s2)
        *temp++ = *s2++;

    return (result);
}


#include <stdio.h>
int main(){
    printf("Result is : %s", ft_strjoin("hello ", "guys"));
}