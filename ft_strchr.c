/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 17:56:53 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:10:12 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	verify;

	verify = 1;
	while (verify)
	{
		if ((char) c == (char)*s)
			return ((char *) s);
		if (*s == 0)
			verify = 0;
		s++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*s = ft_strchr("hel†lo guays", 0);

// 	// if(s){ printf("is: %s", s);} else {printf("is: NULL");}
// 	/*
// 	int c = 0;
// 	while (c <= 255)
// 	{
// 	char *s = ft_strchr("hel†lo guays", 0);
// 	printf("c = %3d: %s\n", c, s ? "FOUND" : "NOT FOUND");
// 	c++;
// 	}*/
// 	printf("is: %s", s - 2);
// }
