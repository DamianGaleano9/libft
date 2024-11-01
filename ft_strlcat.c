/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:47:08 by damian            #+#    #+#             */
/*   Updated: 2024/10/22 11:55:07 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if ((!src || !dst) && dstsize == 0)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
int main(void) {
    char dst[20] = "Hola, ";  // Cadena destino con suficiente espacio
    const char *src = "mundo!"; // Cadena fuente a concatenar
    size_t dstsize = sizeof(dst); // Tamaño del destino

    size_t res = ft_strlcat(dst, src, dstsize); // Llamada a ft_strlcat

    printf("Cadena concatenada: %s\n", dst);
    printf("Longitud total: %zu\n", res);

    return 0;
}
*/