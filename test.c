// // #include <stdio.h>
// // #include "libft.h"

// // static size_t	ft_word_count(const char *str, char set)
// // {
// // 	size_t	count;

// // 	count = 0;
// // 	while (*str)
// // 	{
// // 		while (*str == set)
// // 			str++;
// // 		if (*str)
// // 			count++;
// // 		while (*str && *str != set)
// // 			str++;
// // 	}
// // 	return (count);
// // }
// // int main()
// // {
// //     char c = ' ';
// //     char *s = ft_strdup("   hello guys how is your day              goin    ");
// // 	size_t	count;
// // 	char	**matrix;

// // 	if (!s)
// // 		return 0;

// // 	matrix = malloc(sizeof(char *) * (count = ft_word_count(s, c) + 1));
// // 	if (!matrix)
// // 		return 0;

// // 	printf("%zu\n", count);
// // 	return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// void free_all(char **s)
// {
//     char **temp;
    
//     if (!s)
//         return;
//     temp = s;
//     while (*temp)
//         free(*temp++);
//     free(s);
// }

// static size_t ft_word_count(const char *str, char set)
// {
//     size_t count = 0;
//     while (*str)
//     {
//         while (*str == set)
//             str++;
//         if (*str)
//             count++;
//         while (*str && *str != set)
//             str++;
//     }
//     return (count);
// }

// char **ft_split(char const *s, char c)
// {
//     size_t  count;
//     char    **matrix;
//     size_t  i;
//     size_t  j;
//     size_t  len;

//     if (!s)
//         return (NULL);
//     count = ft_word_count(s, c);
//     matrix = (char **)malloc(sizeof(char *) * (count + 1));
//     if (!matrix)
//         return (NULL);
//     i = 0;
//     j = 0;
//     while (i < count)
//     {
//         while (s[j] && s[j] == c)
//             j++;
//         len = 0;
//         while (s[j + len] && s[j + len] != c)
//             len++;
//         matrix[i] = ft_substr(s, j, len);
//         if (!matrix[i]) 
//         {
//             free_all(matrix);
//             return (NULL);
//         }
//         j += len;
//         i++;
//     }
//     matrix[i] = NULL; 
//     return (matrix);
// }

// int main(void)
// {
//     char str[] = " hello guys              how is          your day        going  ";
//     printf("DEBUG: Starting test\n");
    
//     char **sp = ft_split(str, ' ');
//     printf("DEBUG: Split finished, result pointer = %p\n", (void *)sp);
//     if (!sp)
//         return (0);
        
//     int i = 0;
//     while (sp[i])
//     {
//         printf("N[%d], is : %s\n", i, sp[i]);
//         i++;
//     }
//     free_all(sp);
//     return (0);
// }


















// #include <stdio.h>
// #include "libft.h"

// void free_all(char **s){
// 	char **temp;
	
// 	if(!s)
// 		return ;
// 	temp = s;
// 	while(*temp)
// 		free(*temp++);
// 	free(s);
// }
// static size_t ft_strlen_set(char const *s, char set){
// 	size_t len;

// 	len = 0;
// 	while(s[len] && s[len] == set)
// 		len++;
// 	return len;
// }

// // static size_t ft_word_count(const char *str, char set)
// // {
// //     size_t count;
// //     size_t verify;

// //     count = 0;
// //     verify = 1;
// //     while(*str){
// //         if(*str == set){
// //             verify = 1;
// //         } else {
// //             if(verify)
// //                 count++;
// //             verify = 0;
// //         }
// //         str++;
// //     }
// //     return (count);
// // }


// static size_t	ft_word_count(const char *str, char set)
// {
// 	size_t	count;

// 	count = 0;
// 	while (*str)
// 	{
// 		while (*str == set)
// 			str++;
// 		if (*str)
// 			count++;
// 		while (*str && *str != set)
// 			str++;
// 	}
// 	return (count);
// }

// // static char *ft_copy_word(char const *s, char c){
// // 	size_t len;
// // 	char *temp;
// // 	while(*s && *s != c)
// // 		s++;
	
// // }

// static size_t ft_strdup_set(char *dest, const char *s, size_t start, char set){
// 	char *word;
// 	size_t len;
// 	size_t i;


// 	while(s[start] && s[start] != set)
// 		start++;

// 	len = ft_strlen_set(&s[start], set);
// 	word = ft_calloc((len + 1), sizeof(char));
// 	i = 0;
// 	printf("DEBUG: Inside ft_split2\n");
// 	while(s[start + i] && i < len - 1)
// 		dest[i] = s[start + i++];
	
	
// 	return (i);
// }

// // char	**ft_split(char const *s, char c)
// // {
// // 	char	count;

// // char	**matrix = filling_the_matrix(s, c)
// // (char **) malloc((ft_word_count(s, c) * sizeof(char *) + 1));
// // count = ft_word_count(s, c) * sizeof(char *) + 1)
// // //filling_the_matrix(&(**matrix), )
// // }

// // int	main(void)
// // {
// // 	printf("result is : %zu", ft_word_count("   s s ssss     d d    ", ' '));
// // }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	count;
// 	char	**matrix;
// 	char **tmp;
// 	size_t start;
	
// 	if (!s)
// 		return (NULL);
// 	count = ft_word_count(s, c);
// 	//matrix = malloc(sizeof(char *) * (count + 1));
// 	matrix = (char **)malloc(sizeof(char *) * (count = ft_word_count(s, c) + 1));
// 	if (!matrix)
// 		return (NULL);
// 	tmp = matrix;
// 	start = 0;
// 	//printf("DEBUG: Inside ft_split\n");
// 	while(tmp < (matrix + count))
// 	{
// 		printf("%zu\n", count);
// 		start += ft_strdup_set(*tmp, s, start, c);
// 		tmp++;
// 		printf("DEBUG: Inside ft_split6\n");
// 	}
	
// 	*tmp = NULL;
// 	return (matrix);
// }

// int main(){
// 	char str[] = " hello guys              how is          your day        going  ";
// 	printf("DEBUG: Starting test\n");
//     // char **result = ft_split("hello world", ' ');
    
// 	char **sp = ft_split(str, ' ');
// 	printf("DEBUG: Split finished, result pointer = %p\n", (void *)sp);
// 	if (!sp)
// 		return 0;
// 	for(int i = 0; *sp; i++)
// 		printf(" N[%d], is : %s", i, sp[i]);
// }






// #include "libft.h"

// static size_t ft_size_calculate(long n)
// {
//     size_t	res;

//     res = 0;
//     if (n == 0)
//         return (1);
//     while (n > 0)
//     {
//         n /= 10;
//         res++;
//     }
//     return (res);
// }

// char *ft_itoa(int n)
// {
//     long	nb;
//     int		sign;
//     size_t	len;
//     char	*res;

//     nb = (long)n;
//     sign = (nb < 0);
//     if (sign)
//         nb = -nb;
//     len = ft_size_calculate(nb);
//     res = malloc(sizeof(char) * (len + sign + 1));
//     if (!res)
//         return (NULL);
//     res[len + sign] = '\0';
//     while (len-- > 0)
//     {
//         res[sign + len] = (nb % 10) + '0';
//         nb /= 10;
//     }
//     if (sign)
//         res[0] = '-';
//     return (res);
// }

// #include <stdio.h>
// int main(){
//     printf("%s", ft_itoa(155));
// }
// char *ft_itoa(int n)
// {
//     char    *result;
//     size_t  size;
//     size_t  i;
//     int     sign;
//     long    nb;

//     nb = (long)n;
//     sign = 0;

//     if (nb < 0)
//     {
//         nb = -nb;
//         sign = 1;
//     }

//     if (nb == 0)
//         return (ft_strdup("0"));

//     size = ft_size_calculate(nb);
//     result = ft_calloc(size + sign + 1, sizeof(char));
//     if (!result)
//         return (NULL);

//     i = size + sign;
//     result[i] = '\0';

//     while (i > sign)
//     {
//         result[--i] = (nb % 10) + '0';
//         nb /= 10;
//     }

//     if (sign)
//         result[0] = '-';

//     return (result);
// }

#include <stdio.h>

char f(int i, char c){
    return c + (i % 26);
}

int main(){
    char s[] = "hello mether fuckers guys////";//
    char str[30];
    int i = 0;

    while(s[i]){
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = 0;
    printf("Orig : %s\n", s);
    printf("transformed : %s\n", str);
}