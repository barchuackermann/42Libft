/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:24:08 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/09 08:47:33 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/*Concatena src al final de dst,
 * siendo dstsize el max tamaño a copiar.
 * Devuelve el largo total del string que va a crear*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	j = len_dst;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i] != '\0' && i < (dstsize - len_dst - 1))
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len_dst + len_src);
}
