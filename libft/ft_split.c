/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:20:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/04 17:26:58 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int cpalabras(char const *str, char c)
{
	int i;
	int n;
	
	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == c)
			n++;
		i++;
	}
	return (n);
}

int cletras(char const *str, int n)
{
	int i;

	i = 0;
	while (i < n && str[i])
	{
		i++;
	}
	return (i);
}
char	**ft_split(char const *s, char c)
{
	char **d;
	int pal;
	int n;
	int i;
	
	pal = cpalabras(s, c);
	d = ft_calloc(sizeof(char *), pal);
	n = 0;
	i = 0;
	while (d[n])
	{
		while (s[i] != c)
		{
			if (ft_strchr(s, c) == 0)
				ft_strlcpy(d[n], (char *)s, cletras(s, pal));
			i++;
		}
		n++;
	}
	return (d);
}
