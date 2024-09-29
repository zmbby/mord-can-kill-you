/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:51:03 by zm                #+#    #+#             */
/*   Updated: 2024/09/29 17:00:54 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ispunct(int c)
{
	if (((unsigned char)c >= '!' && (unsigned char)c <= '/')
		|| ((unsigned char)c >= ':' && (unsigned char)c <= '@')
		|| ((unsigned char)c >= '[' && (unsigned char)c <= '`')
		|| ((unsigned char)c >= '{' && (unsigned char)c <= '~'))
		return (1);
	return (0);
}
