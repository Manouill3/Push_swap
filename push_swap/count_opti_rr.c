/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_opti_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:06:27 by marvin            #+#    #+#             */
/*   Updated: 2024/12/14 20:06:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    count_check_rr_rrr(t_list *stack_a, t_list *stack_b, int val_a, int val_b)
{
    int i;
    int j;
    int count;

    count = 0;
    i = ft_index(stack_a, val_a);
    j = ft_index(stack_b, val_b);
    if (i > ft_lstsize(stack_a) / 2 && j > ft_lstsize(stack_b) / 2)
        count += count_add_rrr(stack_a, stack_b, i, j);
    else if (i < ft_lstsize(stack_a) / 2 && j < ft_lstsize(stack_b) / 2)
        count += count_add_rr(stack_a, stack_b, i, j);
    return (count); 
}
int    count_add_rrr(t_list *stack_a, t_list *stack_b, int i, int j)
{
    int k;
    int count;

    count = 0;
    if (i > j)
    {
        k = ft_lstsize(stack_a) - i;
        while (k > 0)
        {
            k--;
            count++;
            rrr_no_print(&stack_a, &stack_b);
        }
    }
    else
    {
        k = ft_lstsize(stack_b) - j;
        while (k > 0)
        {
            k--;
            count++;
            rrr_no_print(&stack_a, &stack_b);
        }
    }
    return (count);
}
int    count_add_rr(t_list *stack_a, t_list *stack_b, int i, int j)
{
    int k;
    int count;

    count = 0;
    if (i > j)
    {
        k = ft_lstsize(stack_b) - j;
        while (k > 0)
        {
            k--;
            count++;
            rr_no_print(&stack_a, &stack_b);
        }
    }
    else
    {
        k = ft_lstsize(stack_a) - i;
        while (k > 0)
        {
            k--;
            count++;
            rr_no_print(&stack_a, &stack_b);
        }
    }
    return (count);
}
