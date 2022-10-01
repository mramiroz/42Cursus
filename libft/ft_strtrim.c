/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:29:49 by mrarmiro-         #+#    #+#             */
/*   Updated: 2022/09/30 09:29:49 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int n;
    char *s;

    i = ft_strlen(s1) - 1;
    n = 0;
    if (set[n] != s1[i] && i >= 0)
    {
        i--;
        n++;
    }
    else
    {
        s = malloc(sizeof(char)*(i + 1));
        s[n] = s1[i];
    }
    return(s);
}