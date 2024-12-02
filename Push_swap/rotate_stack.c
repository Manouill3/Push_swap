/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:00:11 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/02 14:45:02 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = stack_b;
	i = ft_case_rrarrb(stack_a, stack_b, stack_b->content);
	while (tmp)
	{
		if (i > ft_case_rarb_a(stack_a, stack_b, tmp->content))
			i = ft_case_rarb_a(stack_a, stack_b, tmp->content);
		if (i > ft_case_rrarrb_a(stack_a, stack_b, tmp->content))
			i = ft_case_rrarrb_a(stack_a, stack_b, tmp->content);
		if (i > ft_case_rarrb_a(stack_a, stack_b, tmp->content))
			i = ft_case_rarrb_a(stack_a, stack_b, tmp->content);
		if (i > ft_case_rrarb_a(stack_a, stack_b, tmp->content))
			i = ft_case_rrarb_a(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = stack_a;
	i = ft_case_rrarrb(stack_a, stack_b, stack_a->content);
	while (tmp)
	{
		if (i > ft_case_rarb(stack_a, stack_b, tmp->content))
			i = ft_case_rarb(stack_a, stack_b, tmp->content);
		if (i > ft_case_rrarrb(stack_a, stack_b, tmp->content))
			i = ft_case_rrarrb(stack_a, stack_b, tmp->content);
		if (i > ft_case_rarrb(stack_a, stack_b, tmp->content))
			i = ft_case_rarrb(stack_a, stack_b, tmp->content);
		if (i > ft_case_rrarb(stack_a, stack_b, tmp->content))
			i = ft_case_rrarb(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}