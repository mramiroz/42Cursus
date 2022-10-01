/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:14:26 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/01 11:22:32 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*sstr1;
	unsigned char	*sstr2;

	i = 0;
	sstr1 = (unsigned char *)str1;
	sstr2 = (unsigned char *)str2;
	while (i < n && (sstr1[i] != '\0' || sstr2[i] != '\0'))
	{
		sstr1[i] = sstr2[i];
		i++;
	}
	return (sstr1);
}
