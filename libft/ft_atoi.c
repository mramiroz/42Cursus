/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:58:32 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 13:08:48 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	rest;
	int	num;

	i = 0;
	rest = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
		{
			if (str[i] == 45)
				rest *= -1;
			else if (str[i] >= 48 && str[i] <= 57)
				num = num * 10 + str[i] - '0';
			else if (str[i] != 43)
				return (num * rest);
		}
		i++;
	}
	return (num * rest);
}
