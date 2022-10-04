/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:20:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/04 10:13:08 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char **d;
	int i;
	int n;
	int t;

	t = 0;
	i = 0;
	n = 0;
	d = malloc(sizeof(char *) * ft_strlen(s));
	if (!d)
		return (NULL);
	while (s[t])
	{
		while (ft_strchr(s, c) == 0)
		{
			t++;
			i++;
		}
		ft_strlcpy(d[n], (char *)s, (t + 1));
		n++;
	}
	d[n][i] = '\0';
	return (d);
}
