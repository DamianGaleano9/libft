/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damian <damian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:19:00 by damian            #+#    #+#             */
/*   Updated: 2024/10/09 21:19:00 by damian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *org, size_t bytes)
{
	size_t				i;
	unsigned char		*ndes;
	const unsigned char	*norg;

	if (bytes == 0 || des == org)
		return (des);
	i = 0;
	ndes = (unsigned char *) des;
	norg = (const unsigned char *) org;
	while (i < bytes)
	{
		ndes[i] = norg[i];
		i++;
	}
	return (des);
}
