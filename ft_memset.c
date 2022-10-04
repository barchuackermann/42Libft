/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:23:12 by bcriscim          #+#    #+#             */
/*   Updated: 2022/10/04 17:39:31 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	
	ptr = s;
	while (n--)
	{
		*ptr++ = c;
	}
	return (s);
}
// The memset() function writes len bytes of value c
// (converted to an unsigned char) to the string b.
//Retorna void *s modificado con int c en n cantidad de caracteres.