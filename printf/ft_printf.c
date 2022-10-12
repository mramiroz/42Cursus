/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:21:41 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/12 16:36:34 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char const *s, ...)
{
	int i;

	i = 0;
	va_list ptr;
	va_start(ptr, s);
	while (i < s)
	{
		va_arg(ptr, )
	}
	va
}

char printf(char c)
{
	write(1, &c, 1);
}