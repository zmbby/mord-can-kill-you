/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:08:41 by zm                #+#    #+#             */
/*   Updated: 2024/09/05 22:22:28 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{

    size_t  i;
    size_t  catsize;

    i = ft_strlen(dest);
    catsize = i + ft_strlen(src);
    ft_memcpy(dest + i, src, catsize);
    *(dest + catsize) = '\0';
    return (dest);
}