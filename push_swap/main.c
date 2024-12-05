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

	if (ac <= 1)
		ft_printf("Error\n");
	else
	{
		stack_a = NULL;
		list = NULL;
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
