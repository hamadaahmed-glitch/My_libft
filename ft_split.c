/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <hait-h-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:37:52 by username          #+#    #+#             */
/*   Updated: 2026/10/18 17:48:09 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
		// printf("res is : %s\n", matrix[i]);
        if (!matrix[i]) 
        {
            free_all(matrix);
            return (NULL);
        }
        j += len;
        i++;
    }
    matrix[i] = NULL; 
    return (matrix);
}





int main(void)
{
    char str[] = " hello guys              how is          your day        going  ";
    //printf("DEBUG: Starting test\n");
    
    char **sp = ft_split(str, ' ');
    //printf("DEBUG: Split finished, result pointer = %p\n", (void *)sp);
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



