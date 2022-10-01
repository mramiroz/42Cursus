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
	char *d;
	size_t i;
	size_t j;

	d = (char *)malloc(sizeof(*s)*(len + 1));
	if (!d)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{

		if (i >= start && j < len)
		{
			d[j] = s[i];
			j++;
		}
		i++;
	}
	d[j] = 0;
	return (d);

}