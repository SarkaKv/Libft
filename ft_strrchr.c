/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:51:52 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/30 15:23:50 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	ok;

	ok = ft_strlen(str);
	while (ok >= 0)
	{
		if (str[ok] == c)
		{
			return (((char *)&str[ok]));
		}
		ok--;
	}
	if (c == '\0')
		return ((((char *)&str[ok])));
	return (NULL);
}
