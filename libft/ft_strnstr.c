/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:52:16 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/18 12:02:19 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{	
	size_t	i;
	int		n;
	int		find_len;

	if (!str && !len)
		return (0);
	find_len = ft_strlen(to_find);
	if (find_len == 0 || str == to_find)
		return ((char *)str);
	i = 0;
	n = 0;
	if (ft_strlen(to_find) == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + n] == to_find[n] && (i + n) < len)
		{
			n++;
			if (to_find[n] == '\0')
				return (str + i);
		}
		n = 0;
		i++;
	}
	return (0);
}
/*
int main ()
{
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}
*/