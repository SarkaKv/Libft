/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:08:34 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/29 12:20:12 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	ok;

	ok = 0;
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
