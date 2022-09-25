/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:14:50 by marvin            #+#    #+#             */
/*   Updated: 2022/09/23 23:14:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    //int size;
    int i;

    i = 0;
    //size = ft_strlen(s + start);
    sub = (char *)malloc(sizeof(*s) *(len + 1));
    if (NULL == sub)
        return (0);
    while (start != len || s[start] != '\0')
    {
        sub[i] = s[start];
        start++;
        i++;
    }
    sub[i] = '\0';
    return (sub);
}