/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 03:47:51 by zm                #+#    #+#             */
/*   Updated: 2024/08/30 22:17:00 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strdup("hello, world!");
	ft_putstr(str);
	ft_putstr(" ==> ");
	ft_memmove(str, str + 7, 7);
	ft_putstr(str);
	free(str);
	return (0);
}
