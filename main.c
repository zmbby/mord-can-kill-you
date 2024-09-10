/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 03:47:51 by zm                #+#    #+#             */
/*   Updated: 2024/09/10 22:53:00 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[50];
	char	dest[50];

	ft_strcpy(src, "wolrd!");
	ft_strcpy(dest, "hello ");
	ft_putnbr(ft_strlcat(dest,src,8));
	ft_putchar('\n');
	ft_putstr(dest);
	return (0);
}
