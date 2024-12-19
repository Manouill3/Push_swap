/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   To_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:16:34 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/19 15:44:05 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sup_top_a(t_list **stack_a, int val)
{
	t_list	*curr;

	curr = *stack_a;
	while (curr->next)
		curr = curr->next;
	while ((*stack_a)->content < val || curr->content > val)
	{
		curr = *stack_a;
		while (curr->next)
			curr = curr->next;
		if ((*stack_a)->content > val && curr->content < val)
			break ;
		if (find_place_a(*stack_a, val) + 1 > ft_lstsize(*stack_a) / 2)
			reverse_rotate_a(stack_a, 1);
		else
			rotate_a(stack_a, 1);
	}
}

void	sup_top_b(t_list **stack_b, int val)
{
	t_list	*curr;

	curr = *stack_b;
	while (curr->next)
		curr = curr->next;
	while ((*stack_b)->content > val || curr->content < val)
	{
		curr = *stack_b;
		while (curr->next)
			curr = curr->next;
		if ((*stack_b)->content < val && curr->content > val)
			break ;
		if (find_place_b(*stack_b, val) + 1 > ft_lstsize(*stack_b) / 2)
			reverse_rotate_b(stack_b, 1);
		else
			rotate_b(stack_b, 1);
	}
}

void	back_to_a(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b)
	{
		if ((*stack_b)->content > ft_max(*stack_a)
			|| (*stack_b)->content < ft_min(*stack_a))
			val_top(stack_a, ft_min(*stack_a), 'a');
		else
			sup_top_a(stack_a, (*stack_b)->content);
		push_a(stack_b, stack_a);
	}
	val_top(stack_a, ft_min(*stack_a), 'a');
}

int	nb_move_max(t_list *stack_a, t_list *stack_b, int val, int i)
{
	int	j;
	int	size;

	size = ft_lstsize(stack_b);
	j = ft_index(stack_b, ft_max(stack_b));
	if (j > size / 2)
		j = size - j;
	if ((ft_index(stack_a, val) > ft_lstsize(stack_a) / 2
			&& ft_index(stack_b, ft_max(stack_b)) > ft_lstsize(stack_b) / 2)
		|| (ft_index(stack_a, val) <= ft_lstsize(stack_a) / 2
			&& ft_index(stack_b, ft_max(stack_b)) <= ft_lstsize(stack_b) / 2))
	{
		if (i < j)
			i = j;
	}
	else
		i = i + j;
	return (i);
}

int	nb_move_mid(t_list *stack_a, t_list *stack_b, int val, int i)
{
	int	j;
	int	size;

	size = ft_lstsize(stack_b);
	j = ft_index(stack_b, find_sup(stack_b, val));
	if (j > size / 2)
		j = size - j;
	if ((ft_index(stack_a, val) > ft_lstsize(stack_a) / 2
			&& ft_index(stack_b, find_sup(stack_b, val)) > size / 2)
		|| (ft_index(stack_a, val) <= ft_lstsize(stack_a) / 2
			&& ft_index(stack_b, find_sup(stack_b, val)) <= size / 2))
	{
		if (i < j)
			i = j;
	}
	else
		i = i + j;
	return (i);
}
