// #include <stdio.h>
// #include "libft.h"

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
// int main()
// {
//     char c = ' ';
//     char *s = ft_strdup("   hello guys how is your day              goin    ");
// 	size_t	count;
// 	char	**matrix;

// 	if (!s)
// 		return 0;

// 	matrix = malloc(sizeof(char *) * (count = ft_word_count(s, c) + 1));
// 	if (!matrix)
// 		return 0;

// 	printf("%zu\n", count);
// 	return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void free_all(char **s)
{
    char **temp;
    
    if (!s)
        return;
    temp = s;
    while (*temp)
        free(*temp++);
    free(s);
}

static size_t ft_word_count(const char *str, char set)
{
    size_t count = 0;
    while (*str)
    {
        while (*str == set)
            str++;
        if (*str)
            count++;
        while (*str && *str != set)
            str++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    size_t  count;
    char    **matrix;
    size_t  i;
    size_t  j;
    size_t  len;

    if (!s)
        return (NULL);
    count = ft_word_count(s, c);
    matrix = (char **)malloc(sizeof(char *) * (count + 1));
    if (!matrix)
        return (NULL);
    i = 0;
    j = 0;
    while (i < count)
    {
        while (s[j] && s[j] == c)
            j++;
        len = 0;
        while (s[j + len] && s[j + len] != c)
            len++;
        matrix[i] = ft_substr(s, j, len);
        if (!matrix[i]) // Protect against allocation failure
        {
            free_all(matrix);
            return (NULL);
        }
        j += len;
        i++;
    }
    matrix[i] = NULL; // Crucial NULL terminator
    return (matrix);
}

int main(void)
{
    char str[] = " hello guys              how is          your day        going  ";
    printf("DEBUG: Starting test\n");
    
    char **sp = ft_split(str, ' ');
    printf("DEBUG: Split finished, result pointer = %p\n", (void *)sp);
    if (!sp)
        return (0);
        
    int i = 0;
    while (sp[i])
    {
        printf("N[%d], is : %s\n", i, sp[i]);
        i++;
    }
    free_all(sp);
    return (0);
}