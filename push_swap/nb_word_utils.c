/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_word_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:09:12 by marvin            #+#    #+#             */
/*   Updated: 2024/12/05 17:09:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_whitespace(char c)
{
	return (c == 32 || (c > 8 && c < 14));
}

int total_word(char **av)
{
    int i;
    int count;

    i = 1;
    count = 0;
    while (av[i])
    {
        count += count_word(av[i]);
        i++;
    }
    return (count);
}
int count_word(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] && !is_whitespace(str[i]))
        {
            if (is_whitespace(str[i + 1]) || str[i + 1] == '\0')
            count++;
        }
        i++;
    }
    return (count);
}
void    free_all(char **tab, int nb_word)
{
    int i;

    i = 0;
    while (i < nb_word)
        free(tab[i++]);
    free(tab);
}
