/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:05:37 by zm                #+#    #+#             */
/*   Updated: 2024/09/10 23:03:29 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dest, const char *src, size_t bsize)
{
	size_t	i;

	i = ft_strlen(dest);
	if (bsize <= i)
		return (bsize + ft_strlen(src));
	while (i < bsize - 1 && *src)
	{
		dest[i] = *src;
		i++;
		src++;
        bsize--;
	}
	dest[i] = '\0';
	return (i + ft_strlen(src));
}
