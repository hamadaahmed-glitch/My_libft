// #include "libft.h"

// char *ft_strtrim(char const *s1, char const *set){
//     const char *start;
//     char const *end;
//     const char *set_temp;
//     int verify;
    
//     size_t len;
//     if(!s1 || !set)
//         return (NULL);
    
//     start = s1;
//     verify = 1;
//     while(*start && verify){
//         set_temp = set;
//         while(*set_temp && *set_temp == *start)
//             set_temp++;
//         start++;
//     }


//     len = ft_strlen(s1);
//     verify = 1;
//     end = s1 + len - 1; 
//     while(end != start && verify)
//     {
//         set_temp = set;
//         while(*set_temp && *set_temp == *end) 
//             set_temp++;
//         end--;
//     }
//     return (ft_substr(s1, start - s1, end - start));
// }


// #include <stdio.h>
// int main(){
//     printf("result is : %s", ft_strtrim(" a a a a a a a  helllo MF a a a a a", " a"));
// }


#include "libft.h"

char *ft_strtrim(char const *s1, char const *set){
    const char *start;
    const char *end;
    const char *set_temp;
    
    if (!s1 || !set)
        return (NULL);
    
    start = s1;
    while (*start) {
        set_temp = set;
        while (*set_temp && *set_temp != *start)
            set_temp++;
        if (!*set_temp) 
            break;
        start++;
    }

    end = s1 + ft_strlen(s1) - 1;
    
    if (start > end)
        return ((char *)ft_calloc(1, 1));

    while (end >= start) {
        set_temp = set;
        while (*set_temp && *set_temp != *end)
            set_temp++;
        if (!*set_temp) 
            break;
        end--;
    }
    
    return (ft_substr(s1, start - s1, end - start + 1));
}

#include <stdio.h>
int main(){
    printf("result is : '%s'\n", ft_strtrim(" a a a a a a a  helllo MF a a a a a", " a"));
}