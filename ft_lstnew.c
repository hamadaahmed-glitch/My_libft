#include "libft.h"

t_list *ft_lstnew(void *content){
    t_list *p;

    p = (t_list *)malloc(sizeof(t_list));
    if (!p)
        return (NULL);
    p->content = content;
    p->next = NULL;
    return (p);
}

// #include <stdio.h>

// int main(){
//     t_list *s;
//     s = ft_lstnew("hello guys");
//     if(s->next == NULL)
//         printf("result is : %s", (char *)s->content);
// }