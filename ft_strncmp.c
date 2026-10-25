/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:10:34 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:10:34 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	S;

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n) return (0);
		while (n-- && *s1 && *s1++ == *s2) s2++;
		return ((S)*s1 - (S)*s2);
}
