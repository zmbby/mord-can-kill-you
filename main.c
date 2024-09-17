/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 03:47:51 by zm                #+#    #+#             */
/*   Updated: 2024/09/17 23:53:50 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[20];
	char	dest[20];

	ft_strcpy(src, "abc ");
	ft_strcpy(dest, "abc!");
	ft_putnbr(ft_strcmp(src,dest));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(src,dest,0));
	return (0);
}
