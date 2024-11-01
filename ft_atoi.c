/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:24:37 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/06 10:42:17 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	conversion;

	i = 0;
	sign = 1;
	conversion = 0;
	while ((nptr[i] == ' ' ) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((nptr[i] != '\0') && ((nptr[i] >= '0') && (nptr[i] <= '9')))
	{
		conversion = conversion * 10;
		conversion = conversion + nptr[i] - '0';
		i++;
	}
	conversion = conversion * sign;
	return (conversion);
}
