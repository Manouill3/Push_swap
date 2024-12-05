/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:48:35 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/05 14:18:14 by mdegache         ###   ########.fr       */
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
int index(t_list *stack, int c)
{
    int i;
    while (stack->content != c)
    {
        i++;
        stack = stack->next;
    }
    return(i);
}
int	move_to_top(t_list *stack, int val, char *s)
{
	int	i;

	i = 0;
	if (s == "a")
	{
		while (stack->content != val)
		{
			i++;
			if (index(stack, val) > ft_lstsize(stack) / 2)
				reverse_rotate_a(&stack, 1);
			else
				rotate_a(&stack, 1);
		}	
	}
	else
	{
		while (stack->content != val)
		{
			i++;
			if (index(stack, val) > ft_lstsize(stack) / 2)
				reverse_rotate_b(&stack, 1);
			else
				rotate_b(&stack, 1);
		}
	}
}
