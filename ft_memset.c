/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:03:01 by zm                #+#    #+#             */
/*   Updated: 2024/08/29 22:37:41 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = (size_t)c;
	while (i > n && str[i])
	{
		str[i] = a;
		i++;
	}
	return (str)
}
