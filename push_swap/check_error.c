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

int error_arg(char **tab, int nb_word)
{
    int i;

    i = 0;
    while (i < nb_word)
    {
        if (ft_strlen_number(tab[i]) > 11)
            return(-1);
        if(check_char(tab, i) < 0)
            return (-1);
        i++;
    }
    if (i < nb_word || nb_word == 0)
        return (-1);
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
int check_char(char **tab, int i)
{
    int j;
    int count;

    j = 0;
    count = 0;
    while (tab[i][j])
    {
        if ((tab[i][j] == '-' || tab[i][j] == '+') && (tab[i][j - 1] < '0' || tab[i][j - 1] > '9'))
            j++;
        if ((tab[i][j] < '0' || tab[i][j] > '9') && tab[i][j] != ' ')
            return (-1);
        if (tab[i][j] != ' ')
            count++;
        j++;
    }
    if (count == 0)
        return (-1);
    return (1);
}
int ft_strlen_number(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] == '0' || str[i] == '-' || str[i] == '+' || str[i] == ' ')
        i++;
    while (str[i])
    {
        i++;
        j++;
    }
    return(j);
}