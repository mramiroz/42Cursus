/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:38:06 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/10 21:43:29 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*str1;

	ch = (unsigned char)c;
	str1 = (unsigned char *)str;
	i = 0;
	if (n == 0)
		return (0);
	if (str1[i] == ch)
		return (str1);
	while ((str1[i] != ch || str1[i]) && i < n)
	{
		if (str1[i] == ch)
			return (str1 + i);
		i++;
	}
	return (0);
}
