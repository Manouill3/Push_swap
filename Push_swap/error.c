/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:02:01 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/22 10:59:18 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int error_numb(char **tab, int nb_word)
{
    int i;
    int j;
    int count;

    i = 0;
    while (i < nb_word)
    {
        j = 0;
        count = 0;
        while (tab[i][j])
        {
            if (tab[i][j] == '-' || tab[i][j] == '+')
                j++;
            if ((tab[i][j] < '0' || tab[i][j] > '9') && tab[i][j] != ' ')
                return (0);
            if (tab[i][j] != ' ')
                count++;
            j++;
        }
        i++;
        if (count == 0)
            return (0);
    }
    return (1);
}
int error_double(int *list, int nb_word)
{
    int i;
    int j;
    
    i = 0;
    while(i < nb_word)
    {
        j = i + 1;
        while(j < nb_word)
        {
            if(list[i] == list[j])
                return(0);
            j++;
        }
        i++;
    }
    return(1);
}