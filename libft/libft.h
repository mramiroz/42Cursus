/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft copy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:59:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 12:04:58 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

typedef unsigned long size_t;

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(char c);
int	ft_isprint(int c);

void 	*ft_memset(void *ptr, int x, size_t n);
void	ft_strlcpy(char *dest, char *src, int n);
int		ft_strlen(char *str);
char	ft_toupper(int ch);
char	ft_tolower(int ch);
char	*ft_strchr(char *str, char ch);
int		ft_strncmp(char *str1, char *str2, int i);
char	*ft_strrchr(char *str, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);


#endif