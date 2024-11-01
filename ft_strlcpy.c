/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:29:55 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 19:11:40 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *org, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize > 0)
	{
		while (org[i] && i < destsize -1)
		{
			des[i] = org[i];
			i++;
		}
		des[i] = '\0';
	}
	while ((size_t)org[i])
		i++;
	return ((size_t)i);
}
