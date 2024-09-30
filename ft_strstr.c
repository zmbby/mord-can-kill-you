/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:24:10 by zm                #+#    #+#             */
/*   Updated: 2024/09/30 14:04:34 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lopping(int *i, int *j)
{
	(*i)++;
	(*j)++;
}

char	*ft_strstr(const char *str, const char *needle)
{
	int	i;
	int	j;

	if (needle)
	{
		i = 0;
		j = 0;
		while (needle[i] && str[j])
		{
			if (str[j] == needle[i])
				ft_lopping(&i, &j);
			else
			{
				i = 0;
				j = 0;
				str++;
			}
		}
		if (*str != '\0')
			return ((char *)str);
		else
			return (NULL);
	}
	return ((char *)str);
}
