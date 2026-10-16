#include "libft.h"

char *ft_strdup(const char *p)
{
    size_t len = ft_strlen(p);
    char *result = ft_calloc(len, sizeof(char));
    return ((char *)ft_memcpy(result, p, len));
}


#include <stdio.h>

int main() {
    char *p = ft_strdup("“That is a fucking idea!!!!!!!!!!!!!!!!!!!!!!!!!”");
    printf("Result is : %s", p);

}