/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:38:34 by marvin            #+#    #+#             */
/*   Updated: 2024/12/14 15:38:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    check_rr_rrr(t_list **stack_a, t_list **stack_b, int val_a, int val_b)
{
    int i;
    int j;

    i = ft_index(*stack_a, val_a);
    j = ft_index(*stack_b, val_b);
    if (i > ft_lstsize(*stack_a) / 2 && j > ft_lstsize(*stack_b) / 2)
        add_rrr(stack_a, stack_b, i, j);
    else if (i <= ft_lstsize(*stack_a) / 2 && j <= ft_lstsize(*stack_b) / 2)
        add_rr(stack_a, stack_b, i, j); 
}
void    add_rrr(t_list **stack_a, t_list **stack_b, int i, int j)
{
    int k;

    if (i > j)
    {
        k = ft_lstsize(*stack_a) - i;
        while (k > 0)
        {
            k--;
            reverse_rotate_all(stack_a, stack_b);
        }
    }
    else
    {
        k = ft_lstsize(*stack_b) - j;
        while (k > 0)
        {
            k--;
            reverse_rotate_all(stack_a, stack_b);
        }
    }
}
void    add_rr(t_list **stack_a, t_list **stack_b, int i, int j)
{
    int k;

    if (i > j)
    {
        k = j;
        while (k > 0)
        {
            k--;
            rotate_all(stack_a, stack_b);
        }
    }
    else
    {
        k = i;
        while (k > 0)
        {
            k--;
            rotate_all(stack_a, stack_b);
        }
    }
}
