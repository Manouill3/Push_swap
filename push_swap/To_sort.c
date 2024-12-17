/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   To_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:46:45 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/17 14:48:51 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack)
{
	if ((*stack)->content < (*stack)->next->content
		&& (*stack)->content > (*stack)->next->next->content)
		reverse_rotate_a(stack, 1);
	else if ((*stack)->content > (*stack)->next->content
		&& (*stack)->content < (*stack)->next->next->content)
		swap_a(stack, 1);
	else
		sort_three_mul(stack);
}

void	sort_three_mul(t_list **stack)
{
	if ((*stack)->content < (*stack)->next->content
		&& (*stack)->content < (*stack)->next->next->content)
	{
		if ((*stack)->next->content > (*stack)->next->next->content)
		{
			swap_a(stack, 1);
			sort_three(stack);
		}
	}
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->content > (*stack)->next->next->content)
	{
		if ((*stack)->next->content < (*stack)->next->next->content)
			rotate_a(stack, 1);
		else
		{
			swap_a(stack, 1);
			sort_three(stack);
		}
	}
}

void	val_top(t_list **stack, int val, char s)
{
	if (s == 'a')
	{
		while ((*stack)->content != val)
		{
			if (ft_index(*stack, val) > ft_lstsize(*stack) / 2)
				reverse_rotate_a(stack, 1);
			else
				rotate_a(stack, 1);
		}
	}
	else
	{
		while ((*stack)->content != val)
		{
			if (ft_index(*stack, val) > ft_lstsize(*stack) / 2)
				reverse_rotate_b(stack, 1);
			else
				rotate_b(stack, 1);
		}
	}
}

int	nb_move(t_list *stack_a, t_list *stack_b, int val)
{
	int		i;
	t_list	*copy_a;
	t_list	*copy_b;

	i = 1;
	copy_a = copy_stack(stack_a);
	copy_b = copy_stack(stack_b);
	if (val < ft_min(copy_b) || val > ft_max(copy_b))
	{
		i += count_rr_rrr(&copy_a, &copy_b, val, ft_max(copy_b));
		i += count_val_to_top(&copy_a, val);
		i += count_val_to_top(&copy_b, ft_max(copy_b));
	}
	else
	{
		i += count_rr_rrr(&copy_a, &copy_b, val, find_sup(copy_b, val));
		i += count_val_to_top(&copy_a, val);
		i += count_sup_to_top(&copy_b, val);
	}
	ft_lstclear(&copy_a);
	ft_lstclear(&copy_b);
	return (i);
}

void	till_3_op(t_list **stack_a, t_list **stack_b, int val)
{
	if (val < ft_min(*stack_b) || val > ft_max(*stack_b))
	{
		check_rr_rrr(stack_a, stack_b, val, ft_max(*stack_b));
		val_top(stack_a, val, 'a');
		val_top(stack_b, ft_max(*stack_b), 'b');
	}
	else
	{
		check_rr_rrr(stack_a, stack_b, val, find_sup(*stack_b, val));
		val_top(stack_a, val, 'a');
		sup_top_b(stack_b, val);
	}
	push_b(stack_a, stack_b);
}
