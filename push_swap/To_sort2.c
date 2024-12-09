/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   To_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:16:34 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/09 16:56:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_one(t_list **stack_a, t_list **stack_b, int i)
{
    t_list  *tmp;

    tmp = *stack_a;
    while (tmp)
    {
        if (i == nb_move_ab(*stack_a, *stack_b, tmp->content))
            i = push_it_ab(stack_a, stack_b, tmp->content);
    }
}
int    push_it_ab(t_list **stack_a, t_list **stack_b, int val)
{
    val_top(stack_a, val, 'a');
    if (val < ft_max(*stack_b))
        sup_top(stack_b, val, 'b');
    else
        val_top(stack_b, ft_min(*stack_b), 'b');
    push_b(stack_a, stack_b);
    return (-1);
}
void    sup_top(t_list **stack, int val, char s)
{
    if (s == 'a')
	{
		val_top(stack, ft_min(*stack), s);
        while ((*stack)->content < val)
        {
            if (rr_or_r(*stack, val) > ft_lstsize(*stack) / 2)
				reverse_rotate_a(stack, 1);
			else
				rotate_a(stack, 1);          
        }	
	}
	else
	{
		val_top(stack, ft_min(*stack), s);
        while ((*stack)->content < val)
        {
            if (rr_or_r(*stack, val) > ft_lstsize(*stack) / 2)
				reverse_rotate_b(stack, 1);
			else
				rotate_b(stack, 1);
        }
	}    
}
void    back_to_a(t_list **stack_a, t_list **stack_b)
{
    while (*stack_b)
    {
        if ((*stack_b)->content < ft_max(*stack_a))
            sup_top(stack_a, (*stack_b)->content, 'a');
        else
            val_top(stack_a, ft_min(*stack_a), 'a');
        push_a(stack_b, stack_a);
    }
    val_top(stack_a, ft_min(*stack_a), 'a');
}
