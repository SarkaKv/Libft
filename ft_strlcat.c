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
	size_t	ok;
	size_t	siz;

	siz = 0;
	ok = 0;
	while (dst[ok] != '\0')
	{
		ok++;
	}
	while (siz < size && src[siz] != '\0')
	{
		dst[ok] = src[siz];
		ok++;
		siz++;
	}
	dst[ok] = '\0';
	return (ft_strlen(dst));
}
