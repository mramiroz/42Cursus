/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:26:35 by mrarmiro-         #+#    #+#             */
/*   Updated: 2022/09/29 15:26:35 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int value, char *str, int base)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (value < 0)
	    {
            str[i] = '-';
            value = -value;
            i++;
	    }
        while (value >= base)
        {
            str[i] = value / base;
            i++;
        }
        if (value < base)
            str[i] = value + 48;
        i++;
        str[i] = '\0';
    }
    return (str);
}
