/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:33:20 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/27 11:07:14 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	whereisend;
	size_t	starti;
	char	*meow;

	whereisend = start + len;
	starti = 0;
	meow = (char *)malloc(sizeof(char) * len + 1);
	if (!meow)
		return (NULL);
	while (start < whereisend && starti < len)
	{
		meow[starti] = s[start];
		start++;
		starti++;
	}
	meow[starti] = '\0';
	return (meow);
}
