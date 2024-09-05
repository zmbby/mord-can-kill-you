/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:22:42 by zm                #+#    #+#             */
/*   Updated: 2024/09/03 21:17:09 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// int functions

int		ft_strlen(char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// void functions

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr(int n);

// char * functions

char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

// void * functions

void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

#endif
