/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:08:41 by zm                #+#    #+#             */
/*   Updated: 2024/09/05 23:23:27 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{  
    ft_memcpy(dest + ft_strlen(dest), src, ft_strlen(dest) + ft_strlen(src));
    *(dest + (ft_strlen(dest) + ft_strlen(src))) = '\0';
    return (dest);
}