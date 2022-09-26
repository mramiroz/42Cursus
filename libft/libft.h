/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:59:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/09/26 09:36:23 by mrarmiro-        ###   ########.fr       */
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
int		ft_strlen(const char *str);
int		ft_strncmp(char *str1, char *str2, size_t i);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int c);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strrchr(const char *str, int ch);
int	ft_atoi(const char *str);
void	ft_bzero(void *dst, size_t n);



char	ft_toupper(int ch);
char	ft_tolower(int ch);

void	*ft_calloc(size_t num, size_t size);

//Segunda parte
void 	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);


#endif