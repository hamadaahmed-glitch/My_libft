#include "libft.h"
#include <stdio.h>
int main(){
    char p[100];
    printf("%s", (char *)ft_memcpy(p, "Hello guys", sizeof("Hello guys")));
}