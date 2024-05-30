/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:29:18 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/29 11:10:00 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	heh;

	heh = 0;
	while (heh < n)
	{
			if(*(unsigned char *)(str1 + heh) != *(unsigned char *)(str2
			+ heh))
				return(*(unsigned char *)(str1 + heh) - *(unsigned char *)(str2
			+ heh));
		heh++;
	}
	return (0);
}
