/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:34:41 by zm                #+#    #+#             */
/*   Updated: 2024/09/17 22:48:57 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *str, const char *needle, size_t len)
{
    if (needle)
    {
        int i;
        int j;

        i = 0;
        j = 0;
        while (needle[i] && str[j] && len)
        {
            if (str[j] == needle[i])
            {
                i++;
                j++;
            }
            else
            {
                i = 0;
                j = 0;
                str++;
            }
            len--;
        }
        if (*str != '\0' && !needle[j])
            return ((char *)str);
        else
            return (NULL);
    }
    return ((char *)str);
}