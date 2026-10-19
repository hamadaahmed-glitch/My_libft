/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <hait-h-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:50:44 by username          #+#    #+#             */
/*   Updated: 2026/10/18 17:56:05 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d_temp;
	const unsigned char	*s_temp = (const unsigned char *) src;
	size_t				i;

	if (!dst || !src)
		return (NULL);
	d_temp = (unsigned char *) dst;
	s_temp = (const unsigned char *) src;
	if (d_temp == s_temp || len == 0)
		return (dst);
	if (d_temp < s_temp)
	{
		i = 0;
		while (i < len)
			d_temp[i] = s_temp[i++];
	}
	else
	{
		i = len;
		while (i--)
			d_temp[i] = s_temp[i];
	}
	return (dst);
}
