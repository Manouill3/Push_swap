/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funct_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:04:28 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/03 12:29:51 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  swap_b(t_list **stack, int all)
{   
    t_list  *tmp;
    
    if (!*stack)
        return ;
    tmp = (*stack)->next;
    (*stack)->next = tmp->next;
    tmp->next = *stack;
    *stack = tmp;
    if (all != 0)
        ft_printf("sb\n");
}
void  push_b(t_list **stacksta, t_list **stackend)
{
    t_list  *tmp;
    
    if (!*stacksta)
        return ;
    tmp = (*stacksta)->next;
    ft_lstadd_front(stackend, (*stacksta));
    *stacksta = tmp;
    ft_printf("pb\n");
}
void  rotate_b(t_list **stack, int all)
{
    t_list  *tmp;
    t_list  *curr;

    if (!stack)
        return ;
    if (ft_lstsize(*stack) <= 1)
        return ;
    curr = *stack;
    tmp = *stack;
    *stack = (*stack)->next;
    while (curr->next)
        curr = curr->next;
    curr->next = tmp;
    tmp->next = NULL;
    if (all != 0)
        ft_printf("rb\n");
}
void  reverse_rotate_b(t_list **stack, int all)
{
    t_list  *tmp;
    t_list  *curr;
    
    if (!stack)
        return ;
    if (ft_lstsize(*stack) <= 1)
        return ;
    curr = *stack;
    while (curr->next->next)
        curr = curr->next;
    tmp = curr;
    curr = curr->next;
    curr->next = *stack;
    tmp->next = NULL;
    if (all != 0)
        ft_printf("rrb\n");
}