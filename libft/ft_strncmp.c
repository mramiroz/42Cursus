/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:36:40 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/01 18:35:19 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i != (n - 1) && str1[i] == str2[i] && (str1[i] || str2[i]))
	{
		i++;
	}
	if (str1[i] != str2[i])
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}

/*
int main()
{
	char str[] = {"test\200"};
	char str2[] = {"test\0"};
	printf("%i\n", ft_strncmp(str, str2, 6));
	printf("%i", strncmp(str, str2, 6));
}
*/