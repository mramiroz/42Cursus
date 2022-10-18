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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	if ((size_t)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	d = (char *)malloc(sizeof(*s) * (len + 1));
	if (!d)
		return (NULL);
	ft_strlcpy(d, (char *)s + start, len + 1);
	return (d);
}
