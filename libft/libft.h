/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:59:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/20 13:48:33 by mramiro-         ###   ########.fr       */
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
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);


size_t	ft_strlcpy(char *dest, char *src, size_t n);
int		ft_strlen(char *str);
char	*ft_strchr(char *str, char ch);
int		ft_strncmp(char *str1, char *str2, int i);
char	*ft_strrchr(char *str, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
int	ft_atoi(const char *str);


char	ft_toupper(int ch);
char	ft_tolower(int ch);

void	*ft_calloc(size_t num, size_t size);





#endif