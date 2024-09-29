/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:34:41 by zm                #+#    #+#             */
/*   Updated: 2024/09/29 17:08:03 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_looping(int *i, int *j)
{
	(*i)++;
	(*j)++;
}

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (needle)
	{
		i = 0;
		j = 0;
		while (needle[i] && str[j] && len)
		{
			if (str[j] == needle[i])
				ft_looping(&i, &j);
			else
			{
				i = 0;
				j = 0;
				str++;
			}
			len--;
		}
		if (*str != '\0' && !needle[j])
			return ((char *)str);
		else
			return (NULL);
	}
	return ((char *)str);
}
