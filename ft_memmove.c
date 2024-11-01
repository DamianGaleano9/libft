/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: damian <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:28:03 by damian            #+#    #+#             */
/*   Updated: 2024/09/21 20:28:03 by damian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *org, size_t bytes)
{
	unsigned char		*ndes;
	unsigned const char	*norg;

	if (des < org)
		return (ft_memcpy(des, org, bytes));
	ndes = (unsigned char *) des;
	norg = (const unsigned char *) org;
	if (!bytes || des == org)
		return (des);
	while (bytes--)
		ndes[bytes] = norg[bytes];
	return (des);
}
