/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:02:08 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/13 09:02:10 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *d, const void *s, size_t n){
    size_t i;
    unsigned char *d_temp;
    unsigned const char *s_temp;
    if (!s && !d) return NULL;

    d_temp = (unsigned char *)d;
    s_temp = (unsigned const char *)s;
    i = 0;
    while(i++ < n)
        *d_temp++ = *s_temp++;
    
    return (d_temp - (i - 1));
}
