/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:24:10 by zm                #+#    #+#             */
/*   Updated: 2024/09/17 21:48:55 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *str, const char *needle)
{
    if (needle)
    {
        int i;
        int j;

        i = 0;
        j = 0;
        while (needle[i] && str[j])
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
        }
        if (*str != '\0')
            return ((char *)str);
        else
            return (NULL);
    }
    return ((char *)str);
}