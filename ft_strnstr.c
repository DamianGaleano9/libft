/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:01:01 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/03 18:48:54 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if ((!needle || !haystack) && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (needle[k] != '\0'
			&& haystack[i + k] == needle[k] && (i + k) < len)
			k++;
		if (needle[k] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
