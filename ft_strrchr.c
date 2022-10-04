/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:30:11 by bcriscim          #+#    #+#             */
/*   Updated: 2022/09/28 18:45:44 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
		i++;
	while (str[i] <= str[0])
		if (str[i] == c)
			return ((char *)str[i]);
		i--;
	return (0);
}
