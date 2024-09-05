/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 03:47:51 by zm                #+#    #+#             */
/*   Updated: 2024/09/05 23:38:17 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	/*char	src[50];
	char	dest[50];


	ft_strcpy(src, "hello");
	ft_strcat(src,src);
	ft_putstr(src);*/
	int arr[] = {12,15};
	ft_memset(arr,'0',2);
	int i = 0;
	while (i < 2)
	{
		ft_putnbr(arr[i]);
		i++;
	}
	return (0);
}
