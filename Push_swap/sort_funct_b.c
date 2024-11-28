/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funct_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:04:28 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/28 14:56:07 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *swap_b(t_list *stack, int all)
{   
    t_list  *tmp;
    
    if (!stack)
        return(NULL);
    tmp = stack->next;
    stack->next = stack->next->next;
    tmp->next = stack;
    if (all != 0)
        ft_printf("sb\n");
    return (tmp);
}
void  push_b(t_list **stacksta, t_list **stackend, int all)
{
    t_list  *tmp;
    
    if (!*stacksta)
        return;
    tmp = (*stacksta)->next;
    ft_lstadd_front(stackend, ft_lstnew((*stacksta)->content));
    ft_lstdelone(*stacksta);
    *stacksta = tmp;
    if (all != 0)
        ft_printf("pb\n");
}
t_list  *rotate_b(t_list *stack, int all)
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
    if (all != 0)
        ft_printf("rb\n");
    return (stack);
}
t_list  *reverse_rotate_b(t_list *stack, int all)
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
    if (all != 0)
        ft_printf("rrb\n");
    return (curr);
}