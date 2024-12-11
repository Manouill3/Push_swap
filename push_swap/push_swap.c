/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togauthi <togauthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:46:45 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 15:42:35 by togauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **stack_a, t_list **stack_b)
{
    ft_printf("Before push_b:\n");
    ft_printf("Stack A:\n");
    print_stack(*stack_a);
    ft_printf("Stack B:\n");
    print_stack(*stack_b);

    t_list *temp;

    if (*stack_a == NULL)
        return ;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = *stack_b;
    *stack_b = temp;

    ft_printf("After push_b:\n");
    ft_printf("Stack A:\n");
    print_stack(*stack_a);
    ft_printf("Stack B:\n");
    print_stack(*stack_b);
}

void	sup_top_b(t_list **stack_b, int val)
{
    print_stack(*stack_b);

    while ((*stack_b)->content != val)
    {
        if (ft_index(*stack_b, val) > ft_lstsize(*stack_b) / 2)
            reverse_rotate_b(stack_b, 1);
        else
            rotate_b(stack_b, 1);
    }

    print_stack(*stack_b);
}