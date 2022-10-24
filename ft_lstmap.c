#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *P;
    t_list *n;

    p = (t_list*)malloc(sizeof(t_list));
    if (!p || !lst || !f)
        return (NULL);
    while (lst)
    {
        if (!(p = ft_lstnew(f(lst->content))
        {
            ft_lstclear(&p, del);
            return (NULL);
        }
        ft_addback(&n, p);
        lst = lst->next;
    }
    return (n);
}