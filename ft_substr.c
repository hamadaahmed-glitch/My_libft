/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <hait-h-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:49:20 by username          #+#    #+#             */
/*   Updated: 2026/10/18 17:50:23 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char *) ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	result = (char *) malloc((sizeof(char)) * (len + 1));
	i = 0;
	while (i < len && *(s + start))
		result[i++] = *(s + start++);
	return (result);
}
// #include <stdio.h>
// int main(){
//     printf("result is : %s", ft_substr("hello guys", 6, 4));//NULL
// }
