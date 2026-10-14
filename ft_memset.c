/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:03:03 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/13 09:03:05 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memset(void *b, int v, size_t s){
    size_t i;
    unsigned char *temp;

    temp = (unsigned char *)b;
    i = 0;
    while(i < s)
        temp[i++] = v;
    return (b);
}


#include <stdio.h>
int main()
{
    char str[20] = {0};
    char *p = "hello world";
    int i = 0;
    while(i < 11){
        ft_memset(&str[i], p[i], 1);
        i++;
    }
    printf("%s\n", str);
}
