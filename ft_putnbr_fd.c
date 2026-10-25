/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:09:58 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:09:58 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + 48, fd);
}

#include <stdio.h>

int	main(void)
{
	// //setbuf(stdout, NULL);
	// printf(" 0 : \n");
	// fflush(stdout);
	// ft_putnbr_fd(0, 1);
	// printf("\n\n");
	// fflush(stdout);
	// ft_putstr_fd(" 0 : \n", 1);
	// ft_putnbr_fd(0, 1);
	// ft_putstr_fd("\n\n", 1);
	// printf(" 15 : \n");
	// fflush(stdout);
	// ft_putnbr_fd(15, 1);
	// printf("\n\n");
	// fflush(stdout);
	// printf(" -1 : \n");
	// fflush(stdout);
	// ft_putnbr_fd(-1, 1);
	// printf("\n\n");
	// fflush(stdout);
	// printf(" -2147483648 : \n");
	// fflush(stdout);
	// ft_putnbr_fd(-2147483648, 1);
	// printf("\n\n");
	// fflush(stdout);
	// printf(" INT_MIN : \n");
	// fflush(stdout);
	// ft_putnbr_fd(INT_MIN, 1);
	// printf("\n\n");
	// fflush(stdout);
	// printf(" INT_MAX : \n");
	// fflush(stdout);
	// ft_putnbr_fd(INT_MAX, 1);
	// printf("\n\n");
	// fflush(stdout);
	// printf(" 0 : ");
	// ft_putnbr_fd(0, 1);
	// printf("\n\n");
	// printf(" 0 : ");
	// printf("\n\n");
	int	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (fd < 0)
	{
		ft_putstr_fd("you have an fucking error", 1);
		return (1);
	}
	ft_putstr_fd("hello guys", fd);
	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	ft_putstr_fd("\nanother test", fd);
	// how can i delete and write for clean line
	close(fd);
}
