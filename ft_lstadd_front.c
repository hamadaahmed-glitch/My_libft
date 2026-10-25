/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 14:09:10 by username         #+#    #+#              */
/*   Updated: 2026/10/25 14:09:10 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list	*head = NULL;
	t_list	*last = ft_lstnew("last\n");
	t_list	*third = ft_lstnew("third\n");
	t_list	*second = ft_lstnew("second\n");
	t_list	*first = ft_lstnew("first\n");

	ft_lstadd_front(&head, last);
	ft_lstadd_front(&head, third);
	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, first);
	t_list	*current = head;

	while (current)
	{
		printf("result is  : %s", (char *) current->content);
		current = current->next;
	}
	t_list	*temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return (0x00);
}
