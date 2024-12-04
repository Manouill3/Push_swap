/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:44:55 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/04 14:51:03 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	TopOrBottom_a(t_list **stack, int c, int write)
{
	if (find_index(*stack, c) > ft_lstsize(*stack))
		reverse_rotate_a(stack, write);
	else
		rotate_a(stack, write);
}
void	TopOrBottom_b(t_list **stack, int c, int write)
{
	if (find_index(*stack, c) > ft_lstsize(*stack))
		reverse_rotate_b(stack, write);
	else
		rotate_b(stack, write);
}
void	minTopOrBottom_a(t_list **stack, int write)
{
	if (find_index(*stack, ft_min(*stack)) > ft_lstsize(*stack))
		reverse_rotate_a(stack, write);
	else
		rotate_a(stack, write);
}
void	minTopOrBottom_b(t_list **stack, int write)
{
	if (find_index(*stack, ft_min(*stack)) > ft_lstsize(*stack))
		reverse_rotate_b(stack, write);
	else
		rotate_b(stack, write);
}
