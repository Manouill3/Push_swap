/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_utils_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:49:48 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/04 14:52:33 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	TopOrBottom_all_a(t_list **stack_a, t_list **stack_b, int c)
{
	TopOrBottom_a(stack_a, c, 0);
    minTopOrBottom_b(stack_b, 0);
}
void	TopOrBottom_all_b(t_list **stack_a, t_list **stack_b, int c)
{
	minTopOrBottom_a(stack_a, 0);
    TopOrBottom_b(stack_b, c, 0);
}
