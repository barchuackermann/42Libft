/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:21:37 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/02 20:06:38 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/*Busca un string chico en uno grande hasta cierta posición*/
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= little_len)
	{
		if (*big == *little && ft_memcmp(big, little, little_len) == 0)
		{
			return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
