/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funct_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togauthi <togauthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:15:19 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 15:42:11 by togauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a(t_list **stack, int all)
{   
    t_list  *tmp;
    
    if (!*stack)
        return ;
    tmp = (*stack)->next;
    (*stack)->next = tmp->next;
    tmp->next = *stack;
    *stack = tmp;
    if (all != 0)
        ft_printf("sa\n");
}
void    push_a(t_list **stacksta, t_list **stackend)
{
    t_list  *tmp;
    
    if (!*stacksta)
        return ;
    tmp = (*stacksta)->next;
    ft_lstadd_front(stackend, (*stacksta));
    *stacksta = tmp;
    ft_printf("pa\n");
}
void    rotate_a(t_list **stack, int all)
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
        ft_printf("ra\n");
}
void    reverse_rotate_a(t_list **stack, int all)
{
    t_list  *tmp;
    t_list  *curr;
    
    if (!*stack)
        return ;
    if (ft_lstsize(*stack) <= 1)
        return ;
    curr = *stack;
    while (curr->next->next)
        curr = curr->next;
    tmp = curr->next;
    curr->next = NULL;
    tmp->next = *stack;
    *stack = tmp;
    if (all != 0)
        ft_printf("rra\n");
}
