/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:15:19 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/27 14:02:50 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *swap_x(t_list *stack)
{   
    t_list  *tmp;
    
    if (!stack)
        return(NULL);
    tmp = stack->next;
    stack->next = stack->next->next;
    tmp->next = stack;
    return (tmp);
}
void  push_x(t_list **stacksta, t_list **stackend)
{
    t_list  *tmp;
    
    if (!*stacksta)
        return;
    tmp = (*stacksta)->next;
    ft_lstadd_front(stackend, ft_lstnew((*stacksta)->content));
    ft_lstdelone(*stacksta);
    *stacksta = tmp;
}
t_list  *rotate_x(t_list *stack)
{
    t_list  *tmp;
    t_list  *curr;

    if (!stack)
        return (NULL);
    if (ft_lstsize(stack) <= 1)
        return (stack);
    curr = stack;
    tmp = stack;
    stack = stack->next;
    while (curr->next)
        curr = curr->next;
    curr->next = tmp;
    tmp->next = NULL;
    return (stack);
}
t_list  *reverse_rotate_x(t_list *stack)
{
    t_list  *tmp;
    t_list  *curr;
    
    if (!stack)
        return(NULL);
    if (ft_lstsize(stack) <= 1)
        return(stack);
    curr = stack;
    while (curr->next->next)
        curr = curr->next;
    tmp = curr;
    curr = curr->next;
    curr->next = stack;
    tmp->next = NULL;
    return (curr);
}
