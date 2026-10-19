/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <hait-h-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:54:23 by username          #+#    #+#             */
/*   Updated: 2026/10/18 17:54:46 by hait-h-m         ###   ########.fr       */
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
