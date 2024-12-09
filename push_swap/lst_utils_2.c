/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:59:27 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/10 00:02:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_sup_to_top(t_list *stack_b, int val)
{
    int i;

    i = 0;
    if (val > ft_max(stack_b) || val < ft_min(stack_b))
    {
        while (stack_b->content < ft_max(stack_b))
        {
            if (rr_or_r(stack_b, ft_max(stack_b)) > ft_lstsize(stack_b) / 2)
                reverse_rotate_a(&stack_b, 0);
            else
                rotate_a(&stack_b, 0);
            i++;
        }
    }
    else
    {
        while (stack_b->content < val || stack_b->next->content > val)
        {
            rotate_b(&stack_b, 0);
            i++;
        }
    }
    return (i);
}


int rr_or_r(t_list *stack, int val)
{
    int i;

    i = 0;
    while (stack->content < val)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}
