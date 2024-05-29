/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:51:52 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/29 12:11:59 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	ok;

	ok = 0;
	if (!str)
		return (NULL);
	while (str[ok] != '\0')
	{
		ok++;
	}
	while (ok > 0)
	{
		if (str[ok] == c)
		{
			return (((char *)&str[ok]));
		}
		ok--;
	}
	return (NULL);
}
