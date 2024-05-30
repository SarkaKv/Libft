/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:50:50 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/29 12:01:18 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destsiz;
	size_t	i;
	size_t	srcsiz;

	destsiz = ft_strlen(dst);
	srcsiz = ft_strlen(src);
	i = 0;
	if (size <= destsiz)
		return (size + srcsiz);
	while ((destsiz + i < size - 1) && src[i] != '\0')
	{
		dst[destsiz + i] = src[i];
		i++;
	}
	dst[destsiz + i] = '\0';

	return (srcsiz + destsiz);
}
