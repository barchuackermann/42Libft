/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:16:55 by bcriscim          #+#    #+#             */
/*   Updated: 2022/10/25 18:28:41 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch > 64 && ch < 91)
		return (ch + 32);
	return (ch);
}

/*Recibe un valor int y lo devuelve en minúscula.*/
