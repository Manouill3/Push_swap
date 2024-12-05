/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funct_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:13:32 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/03 09:47:59 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  swap_all(t_list **stack_a, t_list **stack_b)
{   
    swap_a(stack_a, 0);
    swap_b(stack_b, 0);
    ft_printf("ss\n");
}
void  rotate_all(t_list **stack_a, t_list **stack_b)
{
    rotate_a(stack_a, 0);
    rotate_b(stack_b, 0);
    ft_printf("rr\n");
}
void  reverse_rotate_all(t_list **stack_a, t_list **stack_b)
{
    reverse_rotate_a(stack_a, 0);
    reverse_rotate_b(stack_b, 0);
    ft_printf("rrr\n");
}