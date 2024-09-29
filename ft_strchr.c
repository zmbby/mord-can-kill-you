/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:05:51 by zm                #+#    #+#             */
/*   Updated: 2024/09/29 17:01:24 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	if (c == 0)
		return ((char *)src + ft_strlen(src));
	while (*src)
	{
		if ((unsigned char)c == *src)
			return ((char *)src);
		src++;
	}
	return (NULL);
}
