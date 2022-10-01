/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:20:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/01 16:53:29 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char **dest;
	int i;
	int n;
	int t;

	t = 0;
	i = 0;
	n = 0;
	dest = malloc(sizeof(char *) * ft_strlen(s));
	while (s[t])
	{
		while (s[t] != c && s[t])
		{
			dest[i][n] = s[t];
			n++;
			t++;
		}
		dest[i][n] = '\0';
		i++;
	}
	return (dest);
}
