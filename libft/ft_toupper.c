/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:38:11 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 12:05:12 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	else
		return (ch);
	return (ch);
}

/*
int main()
{
	int j = 0;
    char str[] = "geekforgeeks\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        printf("%c", ft_toupper(ch));
        j++;
    }
 
    return 0;
}
*/