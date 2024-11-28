/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:03:48 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/28 15:13:53 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_stacks(t_list **stack_a, /*t_list **stack_b,*/ int nb_word)
{
	if (nb_word == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			*stack_a = swap_a(*stack_a, 1);
	}
	if (nb_word == 3)
		*stack_a = three_val(*stack_a);
		
}
t_list	*three_val_mul(t_list *stack)
{
	if (stack->content < stack->next->content && stack->content < stack->next->next->content)
    {
        if (stack->next->content < stack->next->next->content)
            return(stack);
		else
		{
			stack = swap_a(stack, 1);
			return (three_val(stack));    
		}
    }
	if (stack->content > stack->next->content && stack->content > stack->next->next->content)
    {
        if (stack->next->content < stack->next->next->content)
		{
			stack = rotate_a(stack, 1);
            return(stack);
		}
		else
		{
			stack = swap_a(stack, 1);
			return (three_val(stack));    
		}
    }
	return(NULL);
}

t_list	*three_val(t_list *stack)
{
    if (stack->content < stack->next->content && stack->content > stack->next->next->content)
	{
		stack = reverse_rotate_a(stack, 1);
		return (stack);
	}
	else if (stack->content > stack->next->content && stack->content < stack->next->next->content)
	{
		stack = swap_a(stack, 1);
		return(stack);
	}
	else
		return(three_val_mul(stack));
}
