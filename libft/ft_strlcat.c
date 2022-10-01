/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:49:41 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/29 19:47:29 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t len_src;
	size_t len_dest;
	size_t i;
	size_t len;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	len = len_dest + len_src;
	i = 0;
	if (dstsize <= len_dest)
		return(len_src + dstsize);
	while (*dest)
		dest++;
	while ((i < dstsize - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
