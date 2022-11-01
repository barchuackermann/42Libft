/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:00:05 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/01 13:00:06 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/*Copia n caract. de src a dst. Si hay overlaping es indefinido*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*srce;

	i = 0;
	dest = dst;
	srce = src;
	while (i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}
