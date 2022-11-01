/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:05:27 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/01 12:25:39 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/*Compara la cadena s1 y s2 hasta n cant. de caract. 
 * Si s1 es mayor, retorna positivo, sino negativo, sino NULL*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (j < n && s2[j] != '\0')
		{
			if (s1[i] < s2[j])
				return (-1);
			else if (s1[i] > s2[j])
				return (1);
			else
				return (0);
		j++;
		}
	i++;
	}
	return (0);
}
