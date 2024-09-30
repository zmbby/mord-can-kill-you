/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <zoentifi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:13:55 by zoentifi          #+#    #+#             */
/*   Updated: 2024/09/30 14:38:09 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*arr;

	arr = (char *)ft_memalloc(size + 1);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, size);
	arr[size + 1] = '\0';
	return (arr);
}
