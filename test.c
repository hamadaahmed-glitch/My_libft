#include <stdio.h>
#include "libft.h"

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