/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoentifi <zoentifi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:57:52 by zoentifi          #+#    #+#             */
/*   Updated: 2024/10/19 20:21:51 by zoentifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*arr;

	arr = ft_memalloc(size * nmemb);
	if (!arr)
		return (NULL);
	ft_bezo(arr,size);
	return (arr);
}
