/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:48:53 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/27 13:40:53 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	hehe;

	hehe = 0;
	if (!str || !c)
		return (NULL);
	while (hehe < n)
	{
		if (*(unsigned char *)(str + hehe) == c)
			return ((unsigned char *)(str + hehe));
		hehe++;
	}
	return (NULL);
}
