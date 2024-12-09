/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:59:27 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/09 14:16:41 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    count_sup_to_top(t_list *stack, int val, char s)
{
    int i;

    val_top(&stack, ft_min(stack), s);
    i = 0;
    while (stack->content < val)
    {
        if (ft_index(stack, val) > ft_lstsize(stack) / 2)
				reverse_rotate_a(&stack, 1);
			else
				rotate_a(&stack, 1);
        i++;          
    }
    return(i);
}

int rr_or_r(t_list *stack, int val)
{
    int i;

    i = 0;
    while (stack->content < val)
    {
        rotate_a(&stack, 0);
        i++;
    }
    return (i);
}
int r_or_rr(t_list *stack, int val)
{
    int i;

    i = 0;
    while (stack->content < val)
    {
        reverse_rotate_a(&stack, 0);
        i++;
    }
    return (i);
}