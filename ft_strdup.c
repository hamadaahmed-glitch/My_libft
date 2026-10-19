/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <hait-h-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:57:48 by username          #+#    #+#             */
/*   Updated: 2026/10/18 17:58:18 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *p)
{
	size_t	len = ft_strlen(p);
	char	*result = ft_calloc(len, sizeof(char));

	len = ft_strlen(p);
	result = ft_calloc(len, sizeof(char));
	return ((char *) ft_memcpy(result, p, len));
}

// #include <stdio.h>

// int main() {
//     char *p = ft_strdup("“That is a fucking idea!!!!!!!!!!!!!!!!!!!!!!!!!”");
//     printf("Result is : %s", p);

// }
