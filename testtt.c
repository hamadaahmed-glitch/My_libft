// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int     *a;
//     char    *s;
//     t_list  *l;
//     t_list  *l2;

//     a = malloc(sizeof(int));
//     if (!a)
//         return (1);
//     *a = 43;

//     s = "hello guys";

//     l = ft_lstnew(a);
//     if (!l)
//     {
//         free(a);
//         return (1);
//     }

//     l2 = ft_lstnew(s);
//     if (!l2)
//     {
//         free(a);
//         free(l);
//         return (1);
//     }

//     l->next = l2;

//     printf("%s and %d\n", (char *)l->next->content,
//         *(int *)l->content);

//     free(a);
//     free(l2);
//     free(l);
//     return (0);
// }


#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

t_list  *ft_lstnew(void *content)
{
    t_list  *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *current;

    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    current = *lst;
    while (current->next)
        current = current->next;
    current->next = new;
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return ;
    del(lst->content);
    free(lst);
}

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *current;
    t_list  *next;

    if (!lst || !del)
        return ;
    current = *lst;
    while (current)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    *lst = NULL;
}

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),
            void (*del)(void *))
{
    t_list  *new_list;
    t_list  *new_node;
    void    *content;

    if (!lst || !f || !del)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        content = f(lst->content);
        new_node = ft_lstnew(content);
        if (!new_node)
        {
            del(content);
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}

void    *multiply_by_two(void *content)
{
    int *result;

    result = malloc(sizeof(int));
    if (!result)
        return (NULL);
    *result = (*(int *)content) * 2;
    return (result);
}

void    delete_content(void *content)
{
    free(content);
}

void    print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d", *(int *)lst->content);
        if (lst->next)
            printf(" -> ");
        lst = lst->next;
    }
    printf(" -> NULL\n");
}

int *new_int(int value)
{
    int *number;

    number = malloc(sizeof(int));
    if (!number)
        return (NULL);
    *number = value;
    return (number);
}

int main(void)
{
    t_list  *lst;
    t_list  *mapped;
    t_list  *node;
    int     *number;

    lst = NULL;

    number = new_int(1);
    if (!number)
        return (1);
    node = ft_lstnew(number);
    if (!node)
    {
        free(number);
        return (1);
    }
    ft_lstadd_back(&lst, node);

    number = new_int(2);
    if (!number)
    {
        ft_lstclear(&lst, delete_content);
        return (1);
    }
    node = ft_lstnew(number);
    if (!node)
    {
        free(number);
        ft_lstclear(&lst, delete_content);
        return (1);
    }
    ft_lstadd_back(&lst, node);

    number = new_int(3);
    if (!number)
    {
        ft_lstclear(&lst, delete_content);
        return (1);
    }
    node = ft_lstnew(number);
    if (!node)
    {
        free(number);
        ft_lstclear(&lst, delete_content);
        return (1);
    }
    ft_lstadd_back(&lst, node);

    printf("Original list: ");
    print_list(lst);

    mapped = ft_lstmap(lst, multiply_by_two, delete_content);
    if (!mapped)
    {
        ft_lstclear(&lst, delete_content);
        return (1);
    }

    printf("Mapped list:   ");
    print_list(mapped);

    printf("Original list after mapping: ");
    print_list(lst);

    ft_lstclear(&mapped, delete_content);
    ft_lstclear(&lst, delete_content);

    return (0);
}