/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:44 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 13:34:43 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*s;
	int		i;

	i = 0;
	s = (int *)malloc (num * size);

	while (((unsigned char *)s)[i] != '\0')
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
	return (0);
}
