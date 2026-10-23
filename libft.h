/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <hait-h-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:50:32 by username          #+#    #+#             */
/*   Updated: 2026/10/18 17:50:32 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

/*void bzero(void *s, size_t n);
int isalnum(char c);
int isalpha(char c);
int isascii(int ascii);
int isdigit(char c);
int isprint(int p);
void *memset(void *b, int v, size_t s);
int strlen(char *str);
char tolower(char c);
char toupper(char c);
*/
//void *ft_memcpy(void *d, const void *s, size_t n);
//void *ft_memmove(void *dst, const void *src, size_t len);

void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *d, const void *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *p);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void    ft_putchar_fd(char c, int fd);
#endif
