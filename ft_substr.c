/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:35:56 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/26 10:46:49 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		res = (char *)malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	if (len > s_len - start)
		len = s_len - start;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (i++ <= len)
		res[i - 1] = s[start + i - 1];
	res[i - 2] = '\0';
	return (res);
}

// int main()
// {
// 	printf("Substing: %s\n", ft_substr("Hello Damian", 1, 3));
// 	return (0);
// }