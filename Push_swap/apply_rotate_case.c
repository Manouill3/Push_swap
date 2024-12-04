/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rotate_case.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:48:46 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/04 14:54:00 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_rarb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != c && ft_find_place_b(*stack_b, c) > 0)
			TopOrBottom_all_a(stack_a, stack_b, c);
		while ((*stack_a)->content != c)
			TopOrBottom_a(stack_a, c, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			minTopOrBottom_b(stack_b, 1);
		push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->content != c && ft_find_place_a(*stack_a, c) > 0)
			TopOrBottom_all_b(stack_a, stack_b, c);
		while ((*stack_b)->content != c)
			TopOrBottom_b(stack_b, c, 1);
		while (ft_find_place_a(*stack_a, c) > 0)
			minTopOrBottom_a(stack_a, 1);
		push_a(stack_b, stack_a);
	}
	return (-1);
}
int	ft_apply_rrarrb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != c && ft_find_place_b(*stack_b, c) > 0)
			TopOrBottom_all_a(stack_a, stack_b, c);
		while ((*stack_a)->content != c)
			TopOrBottom_a(stack_a, c, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			minTopOrBottom_b(stack_b, 1);
		push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->content != c && ft_find_place_a(*stack_a, c) > 0)
			TopOrBottom_all_b(stack_a, stack_b, c);
		while ((*stack_b)->content != c)
			TopOrBottom_a(stack_a, c, 1);
		while (ft_find_place_a(*stack_a, c) > 0)
			minTopOrBottom_a(stack_a, 1);
		push_a(stack_b, stack_a);
	}
	return (-1);
}
int	ft_apply_rrarb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != c)
			TopOrBottom_a(stack_a, c, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			minTopOrBottom_b(stack_b, 1);
		push_b(stack_a, stack_b);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			minTopOrBottom_a(stack_a, 1);
		while ((*stack_b)->content != c)
			TopOrBottom_b(stack_b, c, 1);
		push_a(stack_b, stack_a);
	}
	return (-1);
}
int	ft_apply_rarrb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->content != c)
			TopOrBottom_a(stack_a, c, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			minTopOrBottom_b(stack_b, 1);
		push_b(stack_a, stack_b);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			minTopOrBottom_a(stack_a, 1);
		while ((*stack_b)->content != c)
			TopOrBottom_b(stack_b, c, 1);	
		push_a(stack_b, stack_a);
	}
	return (-1);
}
