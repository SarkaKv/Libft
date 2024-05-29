/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:48:33 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/27 14:22:18 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	meh;

	meh = 0;
	if (!str1 || !str2)
		return (0);
	while (meh < n && str1[meh] == str2[meh])
	{
		meh++;
	}
	return (str1[meh] - str2[meh]);
}
