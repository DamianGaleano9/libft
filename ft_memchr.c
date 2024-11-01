/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:23:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/23 11:44:21 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		if (p[i] == (unsigned char ) value)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
