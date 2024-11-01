/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:41:34 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/22 12:18:31 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char) c)
			return ((char *) &str[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *) &str[i]);
	return (NULL);
}
/*
int main() {
    const char *str = "Damian!";
    char *res = ft_strchr(str, 'm');

    if (res) {
        printf("Char : %c\n", *res);
        printf("from here: %s\n", res);
    } else {
        printf("char find.\n");
    }

    return 0;
}
*/