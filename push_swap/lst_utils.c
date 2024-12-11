/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:17:20 by marvin            #+#    #+#             */
/*   Updated: 2024/12/05 20:17:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*curr;

	curr = stack;
	while (curr)
	{
		ft_printf("%d |\n", curr->content);
		curr = curr->next;
	}
}
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
int ft_index(t_list *stack, int c)
{
    int i;

	i = 0;
	while (stack)
    {
		if (stack->content == c)
			return(i);
        i++;
	    stack = stack->next;
	}
    return (-1);
}
int	count_val_to_top(t_list *stack, int val)
{
	int 	i;
	t_list	*tmp;

	i = 0;
	tmp = stack;
	while (tmp->content != val)
	{
		i++;
		tmp = tmp->next;
		// if (ft_index(stack, val) > ft_lstsize(stack) / 2)
		// 	reverse_rotate_a(&stack, 0);
		// else
		// 	rotate_a(&stack, 0);
	}
	return (i);
}
