#include "libft.h"

int ft_atoi(const char *str)
{
    int         sign;
    long long   result;

    sign = 1;
    result = 0;

    while (*str == 0x20 || (*str >= 0x09 && *str <= 0x0D))
        str++;

    if (*str == 0x2D || *str == 0x2B)
        if (*str++ == 0x2D)
            sign = -1;

    while (*str >= 0x30 && *str <= 0x39)
        result = (result * 10) + (*str++ - 0x30);

    return ((int)(result * sign));
}

char *p = "hello guys"; // read only
