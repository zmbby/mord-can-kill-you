/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:57:59 by zm                #+#    #+#             */
/*   Updated: 2024/09/10 21:32:54 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	swap;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			swap = ((char *)src)[i];
			((char *)dest)[i] = swap;
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			swap = ((char *)src)[i];
			((char *)dest)[i] = swap;
			i--;
		}
	}
	return (dest);
}
