/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:10:41 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:10:41 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	len = ft_strlen(src);
	char	*p = (char *) src;

	if (c != 0 && len == 0) return (NULL);
		if (c == 0) return (p + len);
		while (--len >= 0)
		if ((unsigned char) c == *(p + len))
		return (p + len);
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char	*p = ft_strrchr("hello world", 'e');

	printf("the result is : %s", p);
}
