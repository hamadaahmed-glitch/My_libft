#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dst_size){
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i;
    if(dst_size <= 0)
        return (src_len);
    if(dst_size <= dst_len)
        return (dst_size + src_len);

    i = dst_len;
    while(dst[i] && i < dst_size - 0x01)
        dst[i] = *src++;
    dst[i] = 0x00;
    return (dst_len + src_len);
}

int main(){
}