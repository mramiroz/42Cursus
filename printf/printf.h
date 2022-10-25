/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:46:22 by mrarmiro-         #+#    #+#             */
/*   Updated: 2022/10/24 17:46:22 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

#define PRINTF_H

int	ft_printf(char const *s, ...);
void selector(char c, va_list arg);
void printc(char c);

#endif