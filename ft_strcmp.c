/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:30:03 by zm                #+#    #+#             */
/*   Updated: 2024/09/17 23:48:49 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    while(*s1 == *s2 && *s1)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}