/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:14:26 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/30 08:42:17 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*sstr1;
	char	*sstr2;

	i = 0;
	sstr1 = (char *)str1;
	sstr2 = (char *)str2;
	while (i < n && (sstr1[i] != '\0' || sstr2[i] != '\0'))
	{
		sstr1[i] = sstr2[i];
		i++;
	}
	return (sstr1);
}
