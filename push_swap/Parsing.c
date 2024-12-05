/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:27:51 by marvin            #+#    #+#             */
/*   Updated: 2024/12/05 17:27:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long    *arg_to_list(char **av, int nb_word)
{   
    char    **tab;
    long    *list;
    
    tab = NULL;
    list = NULL;
    tab = arg_to_tab(av, nb_word);
    if (error_arg(tab) < 0)
    {
        ft_printf("Error\n");
        free_all(tab, nb_word);
        return(NULL);
    }
    list = malloc(sizeof(long) * nb_word);
    list = tab_to_list(tab, list, nb_word);
    if (error_double(list, nb_word) < 0)
    {
        ft_printf("Error\n");
        free_all(tab, nb_word);
        return(NULL);
    }
    free_all(tab, nb_word);
    return (list);
}
char    **arg_to_tab(char **av, int nb_word)
{
    int i;
    int j;
    int k;
    char    **tab;
    char    **tmp_tab;

    i = 0;
    k = 0;
    tab = malloc(sizeof(char *) * nb_word + 1);
    if (!tab)
        return(NULL);
    while (av[i])
    {
        tmp_tab = ft_split(av[i], ' ');
        j = 0;
        while (j < count_word(av[i]))
            tab[k++] = tmp_tab[j++];
        free(tmp_tab);
        i++;
    }
    return (tab);
}
long    *tab_to_list(char **tab, long *list, int nb_word)
{
    int i;

    i = 0;
    while (i < nb_word)
    {
        list[i] = ft_atoi(tab[i]);
        i++;
    }
    return (list);
}
t_list  *list_to_stack(long *list, t_list *stack_a, int nb_word)
{
    int	i;
	
	i = nb_word - 1;
	while (i >= 0)
	{
		ft_lstadd_front(&stack_a, ft_lstnew(list[i]));
		i--;
	}
	return (stack_a);
}