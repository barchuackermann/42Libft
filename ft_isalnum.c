/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:47:10 by bcriscim          #+#    #+#             */
/*   Updated: 2022/09/27 19:50:42 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int h)
{
	if ((h > 47 && h < 58) || (h > 64 && h < 91) || (h > 96 || h < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}