/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:59:27 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/06 11:07:38 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    sup_on_top(t_list *stack, int val, char s)
{
    int i;

    val_top(&stack, ft_min(stack), s);
    i = 0;
    while (stack->content < val)
    {
        rotate_a(&stack, 0);
        i++;
    }
    return(i);
}