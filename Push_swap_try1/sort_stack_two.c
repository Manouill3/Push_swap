/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:36:39 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/05 10:24:02 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_b_till_3(t_list **stack_a, t_list **stack_b)
{
    int		i;
	t_list	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}
void    ft_sort_b(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_b(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_b(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		sort_b_till_3(stack_a, stack_b);
	if (!ft_checksorted(*stack_a))
		sort_three(stack_a);
}
void    ft_sort_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
}
void	ft_sort(t_list **stack_a, t_list **stack_b, int nb_word)
{
	int		i;
    
	if (nb_word == 2)
		sort_two(stack_a);
	else
	{
		ft_sort_b(stack_a, stack_b);
		ft_sort_a(stack_a, stack_b);
		i = find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->content != ft_min(*stack_a))
				rotate_a(stack_a, 1);
		}
		else
		{
			while ((*stack_a)->content != ft_min(*stack_a))
				reverse_rotate_a(stack_a, 1);
		}					
	}
}
int	ft_checksorted(t_list *stack_a)
{
	int	i;

	i = stack_a->content;
	while (stack_a)
	{
		if (i > stack_a->content)
			return (0);
		i = stack_a->content;
		stack_a = stack_a->next;
	}
	return (1);
}
