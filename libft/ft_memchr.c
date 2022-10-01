/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:38:06 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/01 13:59:25 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	ch;
	char	*str1;

	ch = (unsigned char)c;
	str1 = (void *)str;
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
