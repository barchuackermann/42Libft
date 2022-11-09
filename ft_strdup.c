/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:03:05 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/09 11:21:05 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

/*Copia cadenas pero con asignación de memoria y
 * verificación interna*/
char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	ptr = malloc(ft_strlen(s) * sizeof(char) + 1);
	i = 0;
	if (!ptr)
		return (0);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
