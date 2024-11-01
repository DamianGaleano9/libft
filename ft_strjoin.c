/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damian <damian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:28:45 by damian            #+#    #+#             */
/*   Updated: 2024/10/07 22:28:45 by damian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*mem;
	int		i[4];

	if (!s1 || !s2)
		return (NULL);
	i[0] = ft_strlen(s1);
	i[1] = ft_strlen(s2);
	mem = (char *)malloc(i[0] + i[1] + 1);
	i[2] = 0;
	i[3] = 0;
	if (mem == NULL)
		return (NULL);
	while (i[3] < i[0] + i[1])
	{
		if (i[3] < i[0])
			mem[i[3]] = s1[i[3]];
		else
		{
			mem[i[3]] = s2[i[2]];
			i[2]++;
		}
		i[3]++;
	}
	mem[i[3]] = '\0';
	return (mem);
}

// int	main(void)
// {
// 	char const string1[] = "We are";
// 	char const string2[] = "Learning to Code";
// 	printf("%s\n", ft_strjoin(string1, string2));
// 	return (0);
// }