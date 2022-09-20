/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:12:39 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/14 16:31:40 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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