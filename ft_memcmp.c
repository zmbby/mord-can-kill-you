/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:57:41 by zm                #+#    #+#             */
/*   Updated: 2024/09/05 21:20:09 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		rest;


	while (n--)
	{
		rest = *(unsigned char *)s1 - *(unsigned char *)s2;
		if(rest)
			return (rest);
		s1++;
		s2++;
	}
	return (0);
}
