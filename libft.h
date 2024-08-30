/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:22:42 by zm                #+#    #+#             */
/*   Updated: 2024/08/30 04:42:18 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

// int functions

int		ft_strlen(char *str);

// void functions

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_bzero(void *s, size_t n);

// char * functions

char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

// void * functions

void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
