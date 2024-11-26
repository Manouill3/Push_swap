/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:15:19 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/26 15:43:29 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *swap_x(t_list *stack)
{   
    t_list  *tmp;
    
    tmp = stack->next;
    stack->next = stack->next->next;
    tmp->next = stack;
    return (tmp);
}
t_list  *push_x(t_list *stacksta, t_list *stackend)
{
    ft_lstadd_front(&stackend, ft_lstnew(stacksta->content));
    return (stackend);
}
/*t_list  rotate_x(t_list stack)
{
    
}
t_list  reverse_rotate_x(t_list stack)
{
    
}*/
