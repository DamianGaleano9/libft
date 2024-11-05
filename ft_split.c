/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:52:41 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 18:25:01 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_delimiter(const char *str, char c, int index)
{
	while (str[index] && str[index] != c)
		index++;
	return (index);
}

static int	get_word(const char *str, char c, int index)
{
	while (str[index] && str[index] == c)
		index++;
	return (index);
}

static int	count_words(const char *str, char delimiter)
{
	int	word_count;
	int	i;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (str[i] != delimiter)
		{
			word_count++;
			i = my_delimiter(str, delimiter, i);
		}
		else
			i++;
	}
	return (word_count);
}

static void	free_split(char **str_arr)
{
	int	i;

	i = 0;
	while (str_arr[i])
	{
		free(str_arr[i]);
		i++;
	}
	free(str_arr);
}

char	**ft_split(const char *inp_str, char delimiter)
{
	char	**result;
	int		word_count;
	int		i;
	int		j;

	if (!inp_str)
		return (NULL);
	word_count = count_words(inp_str, delimiter);
	result = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count)
	{
		i = get_word(inp_str, delimiter, i);
		result[j] = ft_substr(inp_str, i,
				my_delimiter(inp_str, delimiter, i) - i);
		if (!result[j])
		{
			free_split(result);
			return (NULL);
		}
		i = my_delimiter(inp_str, delimiter, i);
		j++;
	}
	result[j] = NULL;
	return (result);
}

// int	main(void)
// 	{
// 		char	**result;
// 		int		i;

// 		result = ft_split("Hello,I`m,Damian,splicE", ',');
// 		i = 0;
// 		while (result && result[i])
// 		{
// 			printf("%s\n", result[i]);
// 			i++;
// 		}
// 		free_split(result);
// 		return (0);
// 	}
