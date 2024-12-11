/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togauthi <togauthi@student.42.fr>          +#+  +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:59:27 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 15:49:57 by togauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *copy_stack(t_list *stack)
{
    t_list *new_stack = NULL;
    t_list *tmp = stack;

    while (tmp)
    {
        ft_lstadd_back(&new_stack, ft_lstnew(tmp->content));
        tmp = tmp->next;
    }
    return new_stack;
}

int count_sup_to_top(t_list *stack_b, int val)
{
    int i;
    t_list  *stack_copy;
    i = 0;
    stack_copy = copy_stack(stack_b);
    while (stack_copy->content < ft_max(stack_copy))
    {
        if (rr_or_r(stack_copy, ft_max(stack_copy)) > ft_lstsize(stack_copy))
            reverse_rotate_b(&stack_copy, 0);
        else
            rotate_b(&stack_copy, 0);
        i++;        
    }
    while (stack_copy->content < val)
    {
        rotate_b(&stack_copy, 0);
        i++;
    }
    ft_lstclear(&stack_copy);
    return (i);
}

int rr_or_r(t_list *stack, int val)
{
    int i;

    i = 0;
    while (stack->content < val)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}
