#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len){
    unsigned char *d_temp = (unsigned char *)dst;
    const unsigned char *s_temp = (const unsigned char *)src;
    size_t i;

    if (!dst || !src)
        return (NULL);

    if (d_temp == s_temp || len == 0) return (dst);

    if (d_temp < s_temp)
    {
        i = 0;
        while(i < len)
            d_temp[i] = s_temp[i++];
    } else {
        i = len;
        while(i--)
            d_temp[i] = s_temp[i]; 
    }
    return (dst);
}