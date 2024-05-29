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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	starti;
	char	*newstr;

	starti = 0;
	if(!s)
		return(NULL);
	if(start >= ft_strlen(s))
		return(ft_strdup(""));
	if (len > ft_strlen(s) - start)
    		len = ft_strlen(s) - start;
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	while (s[start + starti] != '\0' && starti < len)
	{
		newstr[starti] = s[start + starti];
		starti++;
	}
	newstr[starti] = '\0';
	return (newstr);
}
