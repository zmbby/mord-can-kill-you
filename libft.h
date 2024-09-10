/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:22:42 by zm                #+#    #+#             */
/*   Updated: 2024/09/10 03:09:16 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// int functions

int		ft_strlen(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_strnlen(const char *str, size_t n);

// void functions

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr(int n);

// char * functions

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t dsize);
char	*ft_strdup(const char *src);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t ssize);
char    *ft_stpcpy(char *dest, const char *src);
char    *ft_strnul(const char *s);
char    *ft_strncat(char *dest, const char *src, size_t ssize);

// void * functions

void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void    *ft_mempcpy(void *dest, const void *src, size_t n);

#endif