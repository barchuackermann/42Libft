/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:19:29 by bcriscim          #+#    #+#             */
/*   Updated: 2022/11/01 12:33:31 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Retorna en qué posición de str está c*/
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (c == '\0')
	{
		return ((char *)str + i);
	}
	else
		return (0);
}
