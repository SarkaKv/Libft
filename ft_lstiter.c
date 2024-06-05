/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:31:14 by skvackov          #+#    #+#             */
/*   Updated: 2024/05/30 15:26:34 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ok;

	if (!lst)
		return (NULL);
	ok = lst;
	while (ok->next != NULL)
	{
		(*f)(ok->content);
		ok = ok->next;
	}
}
