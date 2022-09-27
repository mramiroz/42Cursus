/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:04:18 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/27 07:10:02 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
	char *dest;
    int i;
    int size;

    i = 0;
    size = ft_strlen(s);
    dest = (char *)malloc(sizeof(char) * (size + 1));

    while (s[i] != '\0')
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
