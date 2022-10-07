/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:20:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/06 20:19:41 by mrarmiro-        ###   ########.fr       */
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
	n = 1;
	while (str[i])
	{
		if (str[i] == c)
			n++;
		i++;
	}
	return (n);
}

int cletras(char const *str, char c)
{
	int i;

	i = 0;
	while (c != str[i] && str[i])
	{
		i++;
	}
	return (i);
}

char    **ft_split(char const *s, char c)
{
    char **d;
    int pal;
    int size;
    int i;
    int n;
    
    pal = cpalabras(s, c);
    d = ft_calloc(sizeof(char *), pal + 1);
    size = 0;
    i = 0;
    n = 0;
    if (!s || !c || !d)
        return (NULL);
    while (d && n < pal)
    {
        *d = ft_calloc(sizeof(char), (cletras(s + i, c) + 1));
        size = cletras(s + i, c) + 1;
        ft_strlcpy(*d, (char *)s + i, size);
        i = size + i;
        d++;
        n++;
    }
    return (d);
}
