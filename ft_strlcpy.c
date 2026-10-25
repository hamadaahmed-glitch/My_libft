/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:10:26 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:10:26 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len = ft_strlen(src);
	size_t	i;

	if (!src || !dst) return (0);
		i = 0;
	if (!(size == 0))
	{
		while ((i < size - 1) && src[i])
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = 0;
	}
	return (len);
}

// #include <stdio.h>
// int main()
// {
//     char arr[20] = {0};

//     int len = (int)ft_strlcpy(arr, "helloword", 6);
//     printf("dest text is : %s, and leng final is : %d", arr, len);
// }
