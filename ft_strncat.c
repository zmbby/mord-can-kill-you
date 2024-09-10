/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:44:34 by zm                #+#    #+#             */
/*   Updated: 2024/09/10 21:36:09 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t ssize)
{
	ft_stpcpy(ft_mempcpy(ft_strnul(dest), src, ft_strnlen(src, ssize)), "");
	return (dest);
}
