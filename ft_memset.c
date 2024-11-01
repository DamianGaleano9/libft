/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:44:33 by damian            #+#    #+#             */
/*   Updated: 2024/10/23 16:54:24 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *inp, int val, size_t bytes)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *) inp;
	while (i < bytes)
	{
		tmp[i] = (unsigned char)val;
		i++;
	}
	return (inp);
}
/*
int main()
{
	char str[6] = "abcde";
	char str1[6] = "abcde";
	char str2[6] = "abcde";

	ft_memset(str, 'x', 5);
	ft_memset(str, 'x', 4);
	ft_memset(str, 'd', 2);

	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%s\n", str2);
}
*/