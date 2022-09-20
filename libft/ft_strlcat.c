/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:49:41 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 09:34:15 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int		i;
	size_t	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}

	while (n != dstsize)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	return (n);
}