/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:03:48 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/03 14:10:01 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content)
		swap_a(stack, 1);
}

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
