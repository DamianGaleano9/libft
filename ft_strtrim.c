/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:01:30 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/26 09:28:16 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final_str;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	final_str = ft_substr(s1, start, end - start + 1);
	return (final_str);
}

// int	main(void)
// {
// 	char const	str1[] = "    I'm a fast learner    ";
// 	char const	set[] = " ";
// 	char *result;

// 	result = ft_strtrim(str1, set);
// 	if (result)
// 	{
// 		printf("Trimmed result: '%s'\n", result);
// 	}
// 	return (0);
// }