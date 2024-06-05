/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:08:34 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/30 15:24:12 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		ok;
	char	oki;

	ok = 0;
	oki = c;
	if (oki == '\0')
		return ((char *)&str[ft_strlen(str)]);
	if (!ft_isascii(oki))
		return (NULL);
	while (str[ok] != '\0')
	{
		if (str[ok] == c)
		{
			return (((char *)&str[ok]));
		}
		ok++;
	}
	return (NULL);
}
//  int	main(void)
// {
//  	char	*ok;

//  	ok = ft_strchr("Sarinka uz neni dumb :]", '\0');
//  	printf("%s", ok);
// 	}
