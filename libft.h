/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:22:42 by zm                #+#    #+#             */
/*   Updated: 2024/09/16 08:29:33 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// int functions 4

int		ft_strlen(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strnlen(const char *str, size_t n);
int		ft_strlcat(char *dest, const char *src, size_t bsize);

// void functions 4

void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr(int n);

// char * functions 7

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t dsize);
char	*ft_strdup(const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t ssize);
char	*ft_stpcpy(char *dest, const char *src);
char	*ft_strnul(const char *s);
char	*ft_strchr(const char *src, int c);
char    *ft_strrchr(const char *src, int c);

// void * functions 6

void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_mempcpy(void *dest, const void *src, size_t n);

#endif
