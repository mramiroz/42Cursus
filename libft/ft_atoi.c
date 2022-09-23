/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:41:46 by marvin            #+#    #+#             */
/*   Updated: 2022/09/22 09:41:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	rest;

	i = 0;
	rest = 1;
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

/*
int main()
{
	printf("%d", ft_atoi("   --\n-+--+1234ab567"));
}
*/