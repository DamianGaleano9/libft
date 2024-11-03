/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:52:41 by marvin            #+#    #+#             */
/*   Updated: 2024/11/02 10:52:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_subs(char **subs, char const *input, char sep)
{
	char			**pos;
	char const		*end;

	pos = subs;
	while (*input)
	{
		while (*input == sep)
			++input;
		if (*input == '\0')
			break ;
		end = input;
		while (*end && *end != sep)
			++end;
		*pos = ft_substr(input, 0, end - input);
		input = end;
		++pos;
	}
	*pos = NULL;
}

static int	count_subs(char const *input, char sep)
{
	int	count;

	count = 0;
	while (*input)
	{
		while (*input == sep)
			++input;
		if (*input)
			++count;
		while (*input && *input != sep)
			++input;
	}
	return (count);
}

char	**split_str(char const *input, char sep)
{
	char	**subs_array;
	int		count;

	if (!input)
		return (NULL);
	count = count_subs(input, sep);
	subs_array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!subs_array)
		return (NULL);
	fill_subs(subs_array, input, sep);
	return (subs_array);
}

void	free_subs(char **subs)
{
	int	i;

	i = 0;
	if (subs)
	{
		while (subs[i])
		{
			free(subs[i]);
			i++;
		}
		free(subs);
	}
}

int	main(void)
{
	char	**result;
	int		i;

	result = split_str("Hello,I`m,Damian,splice", ',');
	i = 0;
	while (result && result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free_subs(result);
	return (0);
}
