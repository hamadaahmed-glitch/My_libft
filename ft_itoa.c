/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:08:55 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:08:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// static size_t ft_size_calculate(int n){
//     size_t res;
//     // if (n == 0)
//     //     return (1);
//     res = 0;
//     while(n > 0){
//         // res *= 10;
//         // n += n / 10;
//         n /= 10;
//         res++;
//     }
//     return (res);
// }
// char *ft_itoa(int n){
//     char *result;
//     size_t size;
//     int sign;
//     size_t i;
//     long nb;

//     if(n == 0){
//         result = (char *)ft_calloc(2, 1);
//         if(!result)
//             return (NULL);
//         *result = '0';
//         return (result);
//     }

//     nb = (long)n;
//     sign = 0;
//     if (nb < 0)
//     {
//         nb = -nb;
//         sign = 1;
//     }
//     size = ft_size_calculate(nb);
//     result = ft_calloc(sizeof(char), size + sign + 1);
//     if(!result)
//         return (NULL);

//     if(sign){
//         result[0] = '-';
//         //sign = 0;
//     }
//     //sign && result[0] = '-';
//     i = size + sign;
//     while(i > sign){
//         result[--i] = nb % 10 + 48;
//         nb /= 10;
//     }
//     return (result);

//     //result = (char *)malloc();
// }

#include <stdio.h>
#include "libft.h"

static size_t	ft_size_calculate(long n)
{
	size_t	res;

	res = 0;
	while (n > 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	int		sign;
	char	*res;

	nb = (long) n;
	sign = (nb < 0);
	// 1
	if (sign)
		nb = -nb;
	len = ft_size_calculate(nb);
	res = malloc(sizeof(char) * (len + sign + 1));
	if (!res)
		return (NULL);
	res[len + sign] = '\0';
	while (len-- > 0)
	{
		res[len + sign] = nb % 10 + 48;
		nb /= 10;
	}
	if (sign) // true
		res[0] = 0x2D;
	// {-, 2, 3,4}
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
//     char *str;

//     str = ft_itoa(-1);
//     if (str)
//     {
//         printf("%s\n", str);
//         free(str);
//     }
//     return (0);
// }

#include <stdio.h>

int	main(void)
{
	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(1));
	// printf("%s\n", ft_itoa(-1));
	// printf("%s\n", ft_itoa(42));
	// printf("%s\n", ft_itoa(-42));
	// printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
}
