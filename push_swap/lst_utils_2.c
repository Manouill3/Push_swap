/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:59:27 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 09:02:09 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_sup_to_top(t_list *stack_b, int val)
{
    int i;

    i = 0;
    while (stack_b->content < ft_max(stack_b))
    {
        if (rr_or_r(stack_b, ft_max(stack_b)) > ft_lstsize(stack_b))
            reverse_rotate_b(&stack_b, 0);
        else
            rotate_b(&stack_b, 0);
        i++;        
    }
    while (stack_b->content < val)
    {
        rotate_b(&stack_b, 0);
        i++;
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
