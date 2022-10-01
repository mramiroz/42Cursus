/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:38:06 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/30 08:51:11 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t 		i;
	int 		t;
	char		ch;
	const char *str1;
	
	ch = (char)c;
	i = 0;
	n = 0;
	str1 = (const char *)str;

	while ((str1[i] != ch || str1[i] != '\0') && i < n)
	{
		i++;
		if (str1[i] == '\0')
			return (0);
	}
	--i;
	while (str1[i] != '\0')
	{
		i++;
		t++;
	}
	return (0);
}
