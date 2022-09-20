/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:38:06 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 13:50:25 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	size_t	t;
	void	*d;

	i = 0;
	t = 0;
	d = 0;
	while (((unsigned char *)str)[i] != c)
	{
		i++;
	}
	while (t > n)
	{
		((unsigned char *)d)[t] = ((unsigned char *)str)[i];
		t++;
		i++;
	}
	return (d);
}
