/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:00:44 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/02 14:39:11 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = ft_find_place(stack_b, c);
	if (i < ft_find_index(stack_a, c))
		i = ft_find_index(stack_a, c);
	return (i);
}
int	ft_case_rrarrb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place(stack_b, c);
	if ((i < (ft_lstsize(stack_a) - ft_find_index(stack_a, c))) && ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	return (i);
}
int	ft_case_rarrb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	i = ft_find_place(stack_b, c) + i;
	return (i);
}
int	ft_case_rrarb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place(stack_b, c);
	i = ft_find_index(stack_a, c) + i;
	return (i);
}
