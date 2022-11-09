/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:40:48 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/09 10:58:56 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

/*Reserva memoria para nitems de size tamaño, con valor 0.
 * Devuelve un puntero a la posición o NULL si es error*/
void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;

	ptr = NULL;
	ptr = malloc(nitems * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
