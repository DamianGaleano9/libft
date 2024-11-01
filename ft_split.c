/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 22:23:18 by damian            #+#    #+#             */
/*   Updated: 2024/11/01 12:49:13 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(const char *s, char delim)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == delim)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != delim)
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc(n + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < n && s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(const char *s, char delim)
{
	char	**result;
	int		words;
	int		i[3];

	if (!s)
		return (NULL);
	words = ft_count_words(s, delim);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (s[i[0]])
	{
		while (s[i[0]] == delim)
			i[0]++;
		i[2] = i[0];
		while (s[i[0]] && s[i[0]] != delim)
			i[0]++;
		if (i[0] > i[2])
		{
			result[i[1]] = ft_strndup(s + i[2], i[0] - i[2]);
			if (!result[i[1]])
			{
				while (i[1] > 0)
				{
					free(result[--i[1]]);
				}
				free(result);
				return (NULL);
			}
			i[1]++;
		}
	}
	result[i[1]] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	music [] = "Techno, Techouse, House";
// 	char	delim = ' ';
// 	char	**split_return;
// 	size_t	i;

// 	split_return= ft_split(music, delim);
// 	i = 0;
// 	while (split_return[i] != NULL)
// 	{
// 		printf("%s\n", split_return[i]);
// 		i++;
// 	}
// 	return (0);
// }