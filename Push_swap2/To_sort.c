/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   To_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:46:45 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/05 14:28:06 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack)
{
    if ((*stack)->content < (*stack)->next->content && (*stack)->content > (*stack)->next->next->content)
		reverse_rotate_a(stack, 1);
	else if ((*stack)->content > (*stack)->next->content && (*stack)->content < (*stack)->next->next->content)
		swap_a(stack, 1);
	else
		sort_three_mul(stack);
}
void	sort_three_mul(t_list **stack)
{
	if ((*stack)->content < (*stack)->next->content && (*stack)->content < (*stack)->next->next->content)
    {
        if ((*stack)->next->content > (*stack)->next->next->content)
		{
			swap_a(stack, 1);
			sort_three(stack);
		}
    }
	if ((*stack)->content > (*stack)->next->content && (*stack)->content > (*stack)->next->next->content)
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
void	val_top(t_list **stack, int val, char *s)
{
	if (s == "a")
	{
		while ((*stack)->content != val)
		{
			if (index(*stack, val) > ft_lstsize(*stack) / 2)
				reverse_rotate_a(stack, 1);
			else
				rotate_a(stack, 1);
		}	
	}
	else
	{
		while ((*stack)->content != val)
		{
			if (index(*stack, val) > ft_lstsize(*stack) / 2)
				reverse_rotate_b(stack, 1);
			else
				rotate_b(stack, 1);
		}
	}
}
/*int	nb_move(t_list *stack_a, t_list *stack_b, int val)
{
	int	i;
	
	i = move_to_top(stack_a, val, "a");
	i += move_to_top()
}*/