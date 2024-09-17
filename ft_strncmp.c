/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:48:15 by zm                #+#    #+#             */
/*   Updated: 2024/09/17 23:54:47 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if (n == 0)
        return (0);
    while(*s1 == *s2 && *s1 && --n)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}