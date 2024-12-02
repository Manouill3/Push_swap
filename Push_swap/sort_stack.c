/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:03:48 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/02 09:54:09 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_stacks(t_list **stack_a, t_list **stack_b, int nb_word)
{
	if (nb_word == 2)
		sort_two(*stack_a);
	if (nb_word == 3)
		three_val(*stack_a);
	if (nb_word > 3)
		sort_big(*stack_a, *stack_b);
}
void	sort_big(t_list **stack_a, t_list **stack_b)
{
	sort_b(stack_a, stack_b);
	
}
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
		three_val_mul(stack);
}
void	sort_three_mul(t_list **stack)
{
	if ((*stack)->content < (*stack)->next->content && (*stack)->content < (*stack)->next->next->content)
    {
        if ((*stack)->next->content > (*stack)->next->next->content)
			swap_a(stack, 1);
    }
	if ((*stack)->content > (*stack)->next->content && (*stack)->content > (*stack)->next->next->content)
    {
        if ((*stack)->next->content < (*stack)->next->next->content)
			rotate_a(stack, 1);
		else
			swap_a(stack, 1);
    }
}
