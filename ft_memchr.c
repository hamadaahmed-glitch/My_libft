/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 17:54:23 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:09:28 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_temp = (const unsigned char *) s;

	if (!n)
		return (NULL);
	while (n--)
	{
		if (*s_temp++ == (unsigned char) c)
			return ((void *)(s_temp - 1));
	}
	return (NULL);
}
