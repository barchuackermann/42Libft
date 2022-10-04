/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:00:11 by bcriscim          #+#    #+#             */
/*   Updated: 2022/10/04 19:00:23 by bcriscim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while ((s[i] < n) && (s[i] != '\0'))
		{
			(unsigned char *)s[i++] = '\0';
		}
	}

}