/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 23:09:11 by zm                #+#    #+#             */
/*   Updated: 2024/09/10 23:57:41 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *str)
{
	if (str == NULL)
	{
		write(1, "NULL",4);
		return;
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
