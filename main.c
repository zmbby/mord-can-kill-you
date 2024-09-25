/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 03:47:51 by zm                #+#    #+#             */
/*   Updated: 2024/09/25 06:16:43 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[20];

	void	*dest;
	dest = ft_memalloc(20);
	int i = 0;
	while (i < 20)
	{
		((char *)dest)[i] = i + 48;
		i++;
	}
	ft_putstr(dest);
	ft_memdel(dest);
	
	return (0);
}
