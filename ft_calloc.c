/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <hait-h-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:53:19 by username          #+#    #+#             */
/*   Updated: 2026/10/18 17:53:19 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

// #include <unistd.h>
// #include <stdio.h>

// int main(void)
// {
//     char    *p;
//     size_t  i;

//     p = ft_calloc(3, 0);
//     if (!p)
//         return (1);

//     i = 0;
//     while (i < 10)
//     {
//         printf("%d ", p[i]);
//         i++;
//     }
//     printf("\n");
//     free(p);
//     return (0);
// }
