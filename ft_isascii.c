/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:44:55 by zm                #+#    #+#             */
/*   Updated: 2024/09/21 01:46:16 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if ((unsigned char)c >= 0 && (unsigned char)c <= 255)
        return (1);
    return (0);
}