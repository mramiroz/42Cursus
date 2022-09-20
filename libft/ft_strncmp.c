/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:36:40 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/16 12:47:57 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (str1[i] == str2[i] && i == n)
	{
		if (str1[i] > str2[i])
			g++;
		else if (str1[i] < str2[i])
			g--;
		i++;
	}
	return (g);
}
