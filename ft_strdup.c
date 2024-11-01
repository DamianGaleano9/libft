/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:59:26 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/25 13:20:00 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *o)
{
	char	*dup;
	int		size;
	int		i;

	size = ft_strlen(o) + 1;
	dup = (char *) malloc (size);
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = o[i];
		i++;
	}
	return (dup);
}

// int main(void) 
// {
// 	char *str = ft_strdup("Damian");
// 	printf("%s\n", str);
// 	free (str);
// 	return 0;
// }