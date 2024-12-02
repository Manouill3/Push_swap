/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:36:39 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/02 13:59:51 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_b(t_list **stack_a, t_list **stack_b)
{
    push_b(stack_a, stack_b);
    push_b(stack_a, stack_b);
    
}
void    sort_b_till_3(t_list **stack_a, t_list **stack_b)
{
    int i;
    
    i = ft_rotate_type(*stack_a, *stack_b);
    
}