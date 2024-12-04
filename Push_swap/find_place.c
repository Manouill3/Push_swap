/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:01:53 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/04 10:05:49 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list *stack)
{
	int		i;

	i = stack->content;
	while (stack)
	{
		if (stack->content < i)
			i = stack->content;
		stack = stack->next;
	}
	return (i);
}
int	ft_max(t_list *stack)
{
	int		i;

	i = stack->content;
	while (stack)
	{
		if (stack->content > i)
			i = stack->content;
		stack = stack->next;
	}
	return (i);
}
int	find_index(t_list *stack, int nbr)
{
	int		i;

	i = 0;
	while (stack->content != nbr)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
int	ft_find_place_a(t_list *stack_a, int nbr)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (nbr < stack_a->content && nbr > ft_lstlast(stack_a)->content)
		i = 0;
	else if (nbr > ft_max(stack_a) || nbr < ft_min(stack_a))
		i = find_index(stack_a, ft_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->content > nbr || tmp->content < nbr)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}
int	ft_find_place_b(t_list *stack_b, int nbr)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (nbr > stack_b->content && nbr < ft_lstlast(stack_b)->content)
		i = 0;
	else if (nbr > ft_max(stack_b) || nbr < ft_min(stack_b))
		i = find_index(stack_b, ft_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->content < nbr || tmp->content > nbr)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}