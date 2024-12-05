
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:29:04 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/19 14:06:43 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	long	*list;
	char	**tab;
	t_list	*stack_a;
	t_list	*stack_b;
	int		nb_word;

	if (ac > 1)
	{
		nb_word = total_word(av);
		stack_a = NULL;
		stack_b = NULL;
		tab = NULL;
		tab = parsing(nb_word, av, tab);
		list = arg_to_list(ac, av, tab);
		if (list != NULL)
		{
			stack_a = list_to_stack(list, stack_a, nb_word);
			/*if (a_is_sorted == 0)
				ft_sort(&stack_a, &stack_b, nb_word);*/
		}
		free(list);
		free_all(tab, nb_word);
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
	}
	else
		ft_printf("Error\n");
}
