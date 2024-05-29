/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:19:09 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/27 10:15:29 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (!nitems || !size)
		return (NULL);
	ptr = (void *)malloc(size * nitems);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems);
	return (ptr);
}
