/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:12:39 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 12:53:49 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}

/*
int main()
{
	int n;
	n = 40;
	char src[] = "Hola buenas tardes";
	char dest[n];
	ft_strlcpy(dest, src, n);
	printf("%s", dest);
}
*/