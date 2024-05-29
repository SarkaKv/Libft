/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:52:59 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/27 11:18:01 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		oki;
	char	*ptr;
	int		start;
	int		start2;

	start = 0;
	start2 = 0;
	oki = ft_strlen(s);
	ptr = (char *)malloc((oki + 1) * sizeof(char));
	if (!ptr || !s)
		return (NULL);
	while (start < oki)
	{
		ptr[start] = s[start2];
		start++;
		start2++;
	}
	ptr[start] = '\0';
	return (ptr);
}
