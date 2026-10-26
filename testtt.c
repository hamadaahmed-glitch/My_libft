#include "libft.h"

int main (){
    int *a = 43;
    char *s = "hello guys";
    t_list *l;
    t_list *l2;

    l = (t_list *)malloc(sizeof(t_list));
    if(!l)
        return (0);
    l.content = a;
    l2 = ft_lstnew(s);
    l.next = l2;
    printf("%s and %a", l->next->content, l->content);
}


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int     *a;
    char    *s;
    t_list  *l;
    t_list  *l2;

    a = malloc(sizeof(int));
    if (!a)
        return (1);
    *a = 43;

    s = "hello guys";

    l = ft_lstnew(a);
    if (!l)
    {
        free(a);
        return (1);
    }

    l2 = ft_lstnew(s);
    if (!l2)
    {
        free(a);
        free(l);
        return (1);
    }

    l->next = l2;

    printf("%s and %d\n", (char *)l->next->content,
        *(int *)l->content);

    free(a);
    free(l2);
    free(l);
    return (0);
}