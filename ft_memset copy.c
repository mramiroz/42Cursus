/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:09:47 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 11:58:41 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	if (n == 0)
		return (0);
	while (z != n)
	{
		((unsigned char *)ptr)[i] = x;
		i++;
		z++;
	}
	return (ptr);
}

/*
int main()
{
	char str[] = "Hola buenas";
	ft_memset(str, 'c', 3); 
	printf("%s", str);
}
*/