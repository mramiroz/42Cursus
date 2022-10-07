/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:09:36 by mrarmiro-         #+#    #+#             */
/*   Updated: 2022/10/05 21:09:36 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) (void *))
{
    t_list *node;
    t_list *rnode;

    if (!lst || !f || !del)
        return (0);
    node = ft_lstnew(f(lst->content));
    if (!node)
        return (0);
    lst = lst->next;
    rnode = node;
    while(lst)
    {
        node->next = ft_lstnew(f(lst->content));
        if(!node->next)
        {
            ft_lstclear(&rnode, del);
            return(0);
        }
        node = node->next;
        lst = lst->next;
    }
    node->next = NULL;
    return (rnode);
}
