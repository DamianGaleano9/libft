/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:04:26 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/08 19:42:43 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size_ele)
{
	void	*mem;

	mem = malloc(num * size_ele);
	if (mem == NULL)
		return (NULL);
	ft_memset (mem, 0, num * size_ele);
	return (mem);
}
