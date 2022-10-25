/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:21:41 by mramiro-          #+#    #+#             */
/*   Updated: 2022/10/24 21:29:30 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"


int	ft_printf(char const *s, ...)
{
	int i;
	int count;

	i = 0;
	count = 0;
	va_list ptr;
	va_start(ptr, s);
	while (s[i])
	{
		if(s[i] == '%')
		{
			count += selector((char), ptr);
			i++;
		}
		count += write(1, &s[i], 1);
		i++;
	}
	va_end(ptr);
	return (count);
}

int main()
{
	ft_printf("hola %c %c", 'i', 'a');
}
