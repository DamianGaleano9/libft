/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 22:23:18 by damian            #+#    #+#             */
/*   Updated: 2024/11/01 14:32:30 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char delim)
{
	int count = 0;

	while (*s)
	{
		while (*s == delim) s++;
		if (*s != '\0') count++;
		while (*s && *s != delim) s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char *dup = (char *)malloc(n + 1);
	if (!dup)
		return (NULL);
	size_t i = 0;
	while (i < n && s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	ft_free_split(char **result)
{
	int i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(const char *s, char delim)
{
	char	**result;
	int		words, i = 0, j = 0;

	if (!s)
		return (NULL);
	words = ft_count_words(s, delim);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == delim) i++;
		int start = i;
		while (s[i] && s[i] != delim) i++;
		if (i > start)
		{
			result[j] = ft_strndup(s + start, i - start);
			if (!result[j])
			{
				ft_free_split(result);
				return (NULL);
			}
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	music [] = "Techno,Techouse,House";
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
// 	ft_free_split(split_return);

// 	return (0);
// }