/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:01:53 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/02 13:03:19 by mdegache         ###   ########.fr       */
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
int	ft_find_place(t_list *stack, int nbr)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (nbr > stack->content && nbr < ft_lstlast(stack)->content)
		i = 0;
	else if (nbr > ft_max(stack) || nbr < ft_min(stack))
		i = ft_find_index(stack, ft_max(stack));
	else
	{
		tmp = stack->next;
		while (stack->content < nbr || tmp->content > nbr)
		{
			stack = stack->next;
			tmp = stack->next;
			i++;
		}
	}
	return (i);
}
