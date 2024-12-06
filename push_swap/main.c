/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:01:52 by marvin            #+#    #+#             */
/*   Updated: 2024/12/05 17:01:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		nb_word;
	long	*list;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac <= 1)
		return(0);
	else
	{
		stack_a = NULL;
		stack_b = NULL;
		nb_word = total_word(av);
		list = arg_to_list(av, nb_word);
		if (list != NULL)
		{
			stack_a = list_to_stack(list, stack_a, nb_word);
			print_stack(stack_a);
		}
		free(list);
		ft_lstclear(&stack_a);
	}
}
