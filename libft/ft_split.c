/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:20:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/10 16:48:31 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>

int	cpalabas(const char *str, char c)
{
	int n_palabras;
	int flag;

	n_palabras = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			n_palabras++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (n_palabras);
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
    pal = cpalabas(s, c);
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
		free(d[n]);
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