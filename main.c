/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 03:47:51 by zm                #+#    #+#             */
/*   Updated: 2024/09/21 02:01:46 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[20];
	char	dest[20];

	ft_strcpy(src, "    	-1 23928282828282");
//	ft_strcpy(dest, "abc!");
	ft_putnbr(ft_isprint(32));
	ft_putchar('\n');
	//ft_putnbr(atoi(src));
	//ft_putnbr(ft_strncmp(src,dest,0));
	return (0);
}
