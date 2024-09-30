/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:22:42 by zm                #+#    #+#             */
/*   Updated: 2024/09/25 06:14:35 by zm               ###   ########.fr       */
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
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isspace(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isascii(int c);
int		ft_ispunct(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);

// void functions 4

void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr(int n);
void	ft_memdel(void **ap);

// char * functions 7

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t dsize);
char	*ft_strdup(const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t ssize);
char	*ft_stpcpy(char *dest, const char *src);
char	*ft_strnul(const char *s);
char	*ft_strchr(const char *src, int c);
char	*ft_strrchr(const char *src, int c);
char	*ft_strstr(const char *str, const char *needle);
char	*ft_strnstr(const char *str, const char *needle, size_t len);

// void * functions 6

void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_mempcpy(void *dest, const void *src, size_t n);
void	*ft_memalloc(size_t size);

#endif
