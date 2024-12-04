/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_case_ba.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:40:06 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/04 09:58:14 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = ft_find_place_a(stack_a, c);
	if (i < find_index(stack_b, c))
		i = find_index(stack_b, c);
	return (i);
}
int	ft_case_rrarrb_a(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_place_a(stack_a, c);
	if ((i < (ft_lstsize(stack_b) - find_index(stack_b, c))) && find_index(stack_b, c))
		i = ft_lstsize(stack_b) - find_index(stack_b, c);
	return (i);
}
int	ft_case_rarrb_a(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (find_index(stack_b, c))
		i = ft_lstsize(stack_b) - find_index(stack_b, c);
	i = ft_find_place_a(stack_a, c) + i;
	return (i);
}
int	ft_case_rrarb_a(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_place_a(stack_a, c);
	i = find_index(stack_b, c) + i;
	return (i);
}