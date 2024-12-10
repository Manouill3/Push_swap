/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   To_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:16:34 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/10 14:54:04 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    push_it_ab(t_list **stack_a, t_list **stack_b, int val)
{
    val_top(stack_a, val, 'a');
    if (val < ft_max(*stack_b))
        sup_top_a(stack_b, val);
    else
        val_top(stack_b, ft_min(*stack_b), 'b');
    push_b(stack_a, stack_b);
    return (-1);
}
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
void    back_to_a(t_list **stack_a, t_list **stack_b)
{
    while (*stack_b)
    {
        if ((*stack_b)->content < ft_max(*stack_a))
            sup_top_a(stack_a, (*stack_b)->content);
        else
            val_top(stack_a, ft_min(*stack_a), 'a');
        push_a(stack_b, stack_a);
    }
    val_top(stack_a, ft_min(*stack_a), 'a');
}
