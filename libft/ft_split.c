/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:20:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/07 18:32:12 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>

int	cpalabras(char const *str, char c)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
			if ((str[i] != c && (str[i - 1] == c || str[i + 1] == c)))
			{
				n++;
				i++;
			}
		}
		i++;
	}
	if (!n)
		n = 1;
	return (n);
}

int	cletras(char const *str, char c)
{
	int	i;

	i = 0;
	while (c != str[i] && str[i])
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	int		pal;
	int		size;
	int		i;
	int		n;

    if (!s || !c )
        return (NULL);
    pal = cpalabras(s, c);
    d = ft_calloc(sizeof(char *), pal + 1);
    size = 0;
    i = 0;
    n = 0;
    if (!d)
        return (NULL);
    while (n < pal)
	{
		if (s[i] == c)
		{
			while(s[i] == c)
				i++;	
		}
        size = cletras(s + i, c) + 1;
        d[n] = ft_calloc(sizeof(char), (size + 1));
		ft_strlcpy(d[n], (char *)s + i, size);
        i = size + i;
        n++;
	}
    d[n] = 0;
	return (d);
}

/*
int main()
{
	char **p;
	p = ft_split("  HOLA PACO    MARIA ", ' ');
	printf("%s\n", p[0]);
	printf("%s\n", p[1]);
	printf("%s\n", p[2]);
	printf("%s\n", p[3]);
	return 0;
}
*/