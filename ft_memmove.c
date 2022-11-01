/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:59:36 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/01 13:03:21 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/*Copia n caract. de src a dst*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;

	dst2 = dst;
	src2 = src;
	if (src2 <= dst2)
		return (ft_memcpy(dst2, src2, len));
	while (len--)
		dst2[len] = src2[len];
	return (dst);
}
