/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:34:18 by damian            #+#    #+#             */
/*   Updated: 2024/10/22 12:23:58 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main()
{
	char c = 128;
	char c = 9;
	printf("Is a digit: %d\n", ft_isascii(c));
	printf("Is a digit: %d\n", ft_isascii(c));		

}
*/
