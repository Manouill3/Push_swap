/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:36:44 by marvin            #+#    #+#             */
/*   Updated: 2024/12/05 18:36:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int error_arg(char **tab)
{
    int i;
    int j;
    int count;

    i = 0;
    while (tab[i])
    {
        j = 0;
        count = 0;
        while (tab[i][j])
        {
            if (tab[i][j] == '-' || tab[i][j] == '+')
                j++;
            if ((tab[i][j] < '0' || tab[i][j] > '9') && tab[i][j] != ' ')
                return (-1);
            if (tab[i][j] != ' ')
                count++;
            j++;
        }
        i++;
        if (count == 0)
            return (-1);
    }
    return (1);
}
int error_double(long *list, int nb_word)
{
    int i;
    int j;
    
    i = 0;
    while(i < nb_word)
    {
        if (list[i] > 2147483647 || list[i] < -2147483648)
            return(-1);
        j = i + 1;
        while(j < nb_word)
        {
            if(list[i] == list[j])
                return(-1);
            j++;
        }
        i++;
    }
    return(1);
}
