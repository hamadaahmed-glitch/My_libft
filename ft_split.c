#include "libft.h"

static size_t ft_word_count(const char *str, char set)
{
    size_t count;
    size_t verify;

    count = 0;
    verify = 1;
    while(*str){
        if(*str == set){
            verify = 1;
        } else {
            if(verify)
                count++;
            verify = 0;
        }
        str++;
    }
    return (count);
}



// char **ft_split(char const*s, char c)
// {
//     size_t count = ft_word_count(s, c);
// }


#include <stdio.h>
int main(){
    printf("result is : %zu", ft_word_count("   hello    fucking    guys    k ", ' '));
}