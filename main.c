/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 03:47:51 by zm                #+#    #+#             */
/*   Updated: 2024/08/30 04:40:11 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;
	size_t	i;
	size_t	n;

	i = 0;
	str = ft_strdup("Hello, World!");
	ft_putstr(str);
	n = ft_strlen(str);
	ft_putstr(" ==> ");
	ft_bzero(str, 6);
	while (i < n)
	{
		if (str[i] == '\0')
			ft_putchar('\0');
		else
			ft_putchar(str[i]);
		i++;
	}
}
