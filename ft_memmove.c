/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:54:48 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/23 16:28:04 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	notok;

	notok = 0;
	if (dest == src)
		return (dest);
	if (src < dest && src + n > dest)
	{
		while (n != 0)
		{
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
			n--;
		}
	}
	else
	{
		while (notok < n - 1)
		{
			*(unsigned char *)(dest + notok) = *(unsigned char *)(src + notok);
			notok++;
		}
	}
	return (dest);
}
