/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:12:27 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/27 12:12:28 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #old version of my strjoin
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*news;
// 	size_t	start1;
// 	size_t	start2;

// 	start1 = 0;
// 	start2 = 0;
// 	news = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
// 	if (!news)
// 		return (NULL);
// 	while (start1 < ft_strlen(s1))
// 	{
// 		news[start1] = s1[start1];
// 		start1++;
// 	}
// 	while (start1 < ((ft_strlen(s1) + ft_strlen(s2))))
// 	{
// 		news[start1] = s2[start2];
// 		start1++;
// 		start2++;
// 	}
// 	news[start1] = '\0';
// 	return (news);
// }

char	*ft_strjoin(char *s1, char *s2)
{
	char	*news;
	size_t	start1;
	size_t	start2;
	size_t	increase1;
	size_t	increase2;

	increase1 = 0;
	increase2 = 0;
	start1 = ft_strlen(s1);
	start2 = ft_strlen(s2);
	news = (char *)malloc((start1 + start2 + 1) * sizeof(char));
	if (!news)
		return (NULL);
	while (increase1 < start1)
	{
		news[increase1] = s1[increase1];
		increase1++;
	}
	while (increase2 < start2)
	{
		news[increase1+increase2] = s2[increase2];
		increase2++;
	}
	news[increase1+increase2] = '\0';
	return (news);
}
