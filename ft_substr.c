#include "libft.h"



char *ft_substr(char const *s, unsigned int start, size_t len){

    size_t s_len = ft_strlen(s);
    if (!s) return (NULL);
    if (start >= s_len)
        return ((char *)ft_calloc(1, 1));
    if (len > s_len - start)
        len = s_len - start;
    
    
}
(len > s_len - start)
(10 > 3) // 7 - 4