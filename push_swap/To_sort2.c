/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   To_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:16:34 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 11:17:51 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sup_top_a(t_list **stack, int val)
{
    if (val > ft_min(*stack))
    {
        while ((*stack)->content > val)
        {
            if (rr_or_r(*stack, val) > ft_lstsize(*stack) / 2)
                reverse_rotate_a(stack, 1);
            else
                rotate_a(stack, 1);
        }
        while ((*stack)->content < val)
        {
            if (rr_or_r(*stack, val) > ft_lstsize(*stack) / 2)
                reverse_rotate_a(stack, 1);
            else
                rotate_a(stack, 1);
        }
    }
    else
        val_top(stack, ft_min(*stack), 'a');    
}
void    sup_top_b(t_list **stack, int val)
{
    while ((*stack)->content < ft_max(*stack))
    {
        if (rr_or_r(*stack, ft_max(*stack)) > ft_lstsize(*stack))
            reverse_rotate_b(stack, 1);
        else
            rotate_b(stack, 1);    
    }
    while ((*stack)->content < val)
        rotate_b(stack, 1);
}
void    back_to_a(t_list **stack_a, t_list **stack_b)
{
    while (*stack_b)
    {
        if ((*stack_b)->content > ft_max(*stack_a) 
            || (*stack_b)->content < ft_min(*stack_a))
            val_top(stack_a, ft_min(*stack_a), 'a');
        else
            sup_top_a(stack_a, (*stack_b)->content);
        push_a(stack_b, stack_a);
    }
    val_top(stack_a, ft_min(*stack_a), 'a');
}
