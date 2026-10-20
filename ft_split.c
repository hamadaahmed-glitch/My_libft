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

void free_all(char **s){
	char **temp;
	
	if(!s)
		return ;
	temp = s;
	while(*temp)
		free(*temp++);
	free(s);
}
static size_t ft_strlen_set(char const *s, char set){
	size_t len;
	while(s[len] && s[len] == set)
		len++;
	return len;
}

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

static size_t	ft_word_count(const char *str, char set)
{
	size_t	count;

	count = 0;
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

// static char *ft_copy_word(char const *s, char c){
// 	size_t len;
// 	char *temp;
// 	while(*s && *s != c)
// 		s++;
	
// }

static size_t ft_strdup_set(char *dest, const char *s, size_t start, char set){
	char *word;
	size_t len;
	size_t i;
	while(s[start] && s[start] != set)
		start++;
	len = ft_strlen_set(&s[start], set);
	word = ft_calloc((len + 1), sizeof(char));
	i = 0;
	while(s[start + i] && i < len)
		dest[i] = s[start + i++];
	return (i);
}

// char	**ft_split(char const *s, char c)
// {
// 	char	count;

// char	**matrix = filling_the_matrix(s, c)
// (char **) malloc((ft_word_count(s, c) * sizeof(char *) + 1));
// count = ft_word_count(s, c) * sizeof(char *) + 1)
// //filling_the_matrix(&(**matrix), )
// }

// int	main(void)
// {
// 	printf("result is : %zu", ft_word_count("   s s ssss     d d    ", ' '));
// }

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**matrix;
	char **tmp;
	size_t start;
	if (!s)
		return (NULL);
	count = ft_word_count(s, c);
	matrix = malloc(sizeof(char *) * (count + 1));
	matrix = (char **)malloc(sizeof(char *) * (count = ft_word_count(s, c) + 1));
	if (!matrix)
		return (NULL);
	tmp = matrix;
	start = 0;
	while(tmp <= (matrix + count))
	{
		start += ft_strdup_set(*tmp, s, start, c);
		tmp++;
	}
	*tmp = NULL;
	return (matrix);
}

int main(){
	char str[] = " hello guys              how is          your day        going  ";
	char **sp = ft_split(str, ' ');
	for(int i = 0; *sp; i++)
		printf(" N[%d], is : %s", i, sp[i]);
}
