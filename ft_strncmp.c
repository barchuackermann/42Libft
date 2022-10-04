/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:05:27 by bcriscim          #+#    #+#             */
/*   Updated: 2022/09/28 19:23:00 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != n && s2[j] != '\0')
		{
			if (s1[i] < s2[j])
			{
				return (-1);
			}
			else if (s1[i] > s2[j])
			{
				return (1);
			}
			else
			{
				return (0);
			}
		j++;
		}
	i++;
	}
}
