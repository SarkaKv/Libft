/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:15:15 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/24 10:40:31 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	oki;

	oki = 0;
	if (!str)
		return (NULL);
	while (oki < n)
	{
		*(unsigned char *)(str + oki) = c;
		oki++;
	}
	return (str);
}
