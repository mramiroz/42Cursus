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

int inicio(const char *s, const char *set)
{
	int i;

	i = 0;
	while (s[i])
	{
		if(ft_strchr(set, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int final(const char *s, const char *set)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if(ft_strchr(set, s[len - i - 1]) == 0)
			break;
		i++;
	}
	return (len - i);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *s;
	int 	i;
	int		n;

	i = inicio(s1, set);
	n = final(s1, set);
	if (s1 == NULL)
		return	(NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (i >= n)
		return(ft_strdup(""));
	s = malloc(sizeof(char *) * (n - i + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, (char *)s1 + i, n - i + 1);
	return (s);

}	
