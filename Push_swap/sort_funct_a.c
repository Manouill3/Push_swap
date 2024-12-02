/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funct_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:15:19 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/02 09:50:08 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  swap_a(t_list **stack, int all)
{   
    t_list  *tmp;
    
    if (!stack)
        return(NULL);
    tmp = (*stack)->next;
    (*stack)->next = (*stack)->next->next;
    tmp->next = stack;
    if (all != 0)
        ft_printf("sa\n");
    return (tmp);
}
void  push_a(t_list **stacksta, t_list **stackend)
{
    t_list  *tmp;
    
    if (!*stacksta)
        return;
    tmp = (*stacksta)->next;
    ft_lstadd_front(stackend, ft_lstnew((*stacksta)->content));
    ft_lstdelone(*stacksta);
    *stacksta = tmp;
    ft_printf("pa\n");
}
void rotate_a(t_list **stack, int all)
{
    t_list  *tmp;
    t_list  *curr;

    if (!stack)
        return (NULL);
    if (ft_lstsize(stack) <= 1)
        return (stack);
    curr = stack;
    tmp = stack;
    stack = (*stack)->next;
    while (curr->next)
        curr = curr->next;
    curr->next = tmp;
    tmp->next = NULL;
    if (all != 0)
        ft_printf("ra\n");
    return (stack);
}
void  reverse_rotate_a(t_list **stack, int all)
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
        ft_printf("rra\n");
    return (curr);
}
