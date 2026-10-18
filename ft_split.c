#include "libft.h"

// static size_t ft_word_count(const char *str, char set)
// {
//     size_t count;
//     size_t verify;

//     count = 0;
//     verify = 1;
//     while(*str){
//         if(*str == set){
//             verify = 1;
//         } else {
//             if(verify)
//                 count++;
//             verify = 0;
//         }
//         str++;
//     }
//     return (count);
// }
#include <stdio.h>

static size_t ft_word_count(const char *str, char set){
    size_t count = 0;
    while(*str){
        while(*str == set)
            str++;
        if(*str)
            count++;
        while(*str && *str != set)
            str++;
    }
    return (count);
}

// static char** filling_the_matrix(const char ***str, char set)//, size_t count
// {
//     size_t verify;

    

    
// }



// char **ft_split(char const*s, char c)
// {
//     //char count;
//     char **matrix = filling_the_matrix(s, c)//(char **)malloc((ft_word_count(s, c) * sizeof(char *) + 1));// count = ft_word_count(s, c) * sizeof(char *) + 1)
//     //filling_the_matrix(&(**matrix), )
// }


int main(){
    printf("result is : %zu", ft_word_count("   s s ssss     d d    ", ' '));
}