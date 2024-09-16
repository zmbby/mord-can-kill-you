/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 08:19:52 by zm                #+#    #+#             */
/*   Updated: 2024/09/16 08:50:48 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *src, int c)
{
    int flag;
    int i;

    flag = 0;
    i = 0;
    if (c == 0)
        return ((char *)src + ft_strlen(src));
    while (src[i])
        if ((unsigned char)c == src[i++])
            flag = i - 1;
    if (flag)
        return ((char *)src + flag);
    return (NULL);
}