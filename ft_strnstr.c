/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:10:38 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:10:38 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h_temp;

	//= haystack;
	const char	*n_temp;

	//= needle;
	size_t	i;

	if (!*needle) return ((char *) haystack);
		while (*haystack && len > 0)
		{
			i = len;
			h_temp = haystack;
			n_temp = needle;
			while (*h_temp && *n_temp && i > 0 && *h_temp++ == *n_temp++)
				i--;
			if (!*n_temp) return ((char *) haystack);
				haystack++;
			len--;
		}
	return (NULL);
}
